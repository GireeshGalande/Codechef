//decryptNextTransfer.java
 import java.awt.*; 
 import java.awt.event.*; 
 import javax.swing.*; 
 import java.awt.Graphics;
 import java.math.BigInteger; 
 import java.security.*; 
 import java.util.Vector; 
 import java.util.*; 
 import java.io.*; 

 public class decryptNextTransfer extends javax.swing.JFrame { 
 
 
private javax.swing.JButton jButton1; 
private javax.swing.JButton jButton2; 

 
 
private javax.swing.JLabel jLabel1; 
private javax.swing.JLabel jLabel2; 
private javax.swing.JLabel jLabel3; 
private javax.swing.JTextField jTextField1; 
private javax.swing.JTextField jTextField2; 
private javax.swing.JTextField jTextField3; 
BigInteger p,gre; 
int users; 
String decryptedFileName,encryptedFileName; 
Vector v=new Vector(); 
public decryptNextTransfer(String decryptedFileName,String encryptedFileName) 
{ 
	this.decryptedFileName=decryptedFileName;
	this.encryptedFileName=encryptedFile Name; 
	initComponents();
} 
private void initComponents() 
{ 
	setResizable(false); 
	jLabel1 = new javax.swing.JLabel(); 
	jTextField1 = new javax.swing.JTextField(); 
	jLabel2 = new javax.swing.JLabel(); 
	jTextField2 = new javax.swing.JTextField(); 
	jLabel3 = new javax.swing.JLabel(); 
	jTextField3 = new javax.swing.JTextField(); 
	jButton1 = new javax.swing.JButton(); 
	jButton2 = new javax.swing.JButton(); 
	setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE); 
	addWindowListener(new WindowAdapter()
		{ 
			public void windowClosing(WindowEvent evt)
			{ 
				int response = JOptionPane.showConfirmDialog(null, "Do you want to exit?", "Confirm", JOptionPane.YES_NO_OPTION, JOptionPane.QUESTION_MESSAGE); 
				if(response==JOptionPane.YES_OPTION)
					{ 
						System.exit(0);
					} 
					else
						{
						 setDefaultCloseOperation(javax.swing.WindowConstants.DO_NOTHING_ON_CLOSE); 
						}
					}
				}
				); 
	jLabel1.setText("Prime Number"); 
	jTextField1.addActionListener(new java.awt.event.ActionListener() 
	{ 
		public void actionPerformed(java.awt.event.ActionEvent evt) 
		{ 
			jTextField1ActionPerformed(evt);
		}
	}
	); 
	jLabel2.setText("Random Number"); 
	jTextField2.addActionListener(new java.awt.event.ActionListener() 
	{ 
		public void actionPerformed(java.awt.event.ActionEvent evt) 
		{
		 jTextField2ActionPerformed(evt);
		} 
	});
	 jLabel3.setText("Parts Of Private Key"); 
	 jTextField3.addActionListener(new java.awt.event.ActionListener() 
	 	{
	 	 public void actionPerformed(java.awt.event.ActionEvent evt) 
	 	 { jTextField3ActionPerformed(evt); }
	 	}); 
	 jButton1.setText("Next"); 
	 jButton1.addActionListener(new java.awt.event.ActionListener() 
	 	{ 
	 		public void actionPerformed(java.awt.event.ActionEvent evt) 
	 		{ jButton1ActionPerformed(evt); }
	 	}); 
	 jButton2.setText("Back"); 
	 jButton2.addActionListener(new java.awt.event.ActionListener() 
	 	{ 
	 		public void actionPerformed(java.awt.event.ActionEvent evt) 
	 		{ jButton2ActionPerformed(evt);} 
	 	}); 
	 setLayout(null); 
	 add(jButton1); 
	 add(jButton2); 
	 add(jTextField1); 
	 add(jTextField2); 
	 add(jTextField3); 
	 add(jLabel1); 
	 add(jLabel2); 
	 add(jLabel3); 
	 setSize(500,500); 
	 jLabel1.setBounds(20,100,200,20); 
	 jTextField1.setBounds(250,100,200,20); 
	 jLabel2.setBounds(20,160,200,20); 
	 jTextField2.setBounds(250,160,200,20); 
	 jLabel3.setBounds(20,220,200,20); 
	 jTextField3.setBounds(250,220,200,20); 
	 jButton1.setBounds(150,280,100,20); 
	 jButton2.setBounds(150,340,100,20);
	} 
	private void jTextField1ActionPerformed(java.awt.event.ActionEvent evt) { }
	private void jTextField2ActionPerformed(java.awt.event.ActionEvent evt) { } 
	private void jTextField3ActionPerformed(java.awt.event.ActionEvent evt) { } 
	private void jButton2ActionPerformed(java.awt.event.ActionEvent evt)
	{ 
		decryptPage1 dp=new decryptPage1(); 
		dp.setVisible(true); 
		this.setVisible(false);
	} 
	private void jButton1ActionPerformed(java.awt.event.ActionEvent evt) 
	{ 
		if(jTextField1.getText().length()==0 || jTextField2.getText().length()==0 || jTextField3.getText().length()==0)
			{ 
				javax.swing.JOptionPane.showMessageDialog(null,"some of the fields are left blank.you can not proceed further unless the fields are filled");
			} 
		else
			{ 
				String tf1=jTextField1.getText(); 
				String tf2=jTextField2.getText(); 
				String tf3=jTextField3.getText(); 
				p=new BigInteger(jTextField1.getText()); 
				gre=new BigInteger(jTextField2.getText()); 
				users=Integer.parseInt(jTextField3.getText()); 
				test ts=new test(); 
				boolean pb=ts.testPrime(p); 
				boolean greb=ts.testPrime(gre); 
				boolean pg=ts.comparePnG(p,gre); 
				BigInteger limit=new BigInteger("127"); 
				if(pb==false)
					{ 
						javax.swing.JOptionPane.showMessageDialog(null," the prime number entered is incorrect");
					} 
				else if(greb==false)
					{ 
						javax.swing.JOptionPane.showMessageDialog(null,"random number should be prime");
					} 
				else if(p.compareTo(limit)<=0)
					{ 
						javax.swing.JOptionPane.showMessageDialog(null," the prime number should be greater than 127");
					} 
				else if(pg==false)
					{ 
						javax.swing.JOptionPane.showMessageDialog(null,"random number should be less than the prime number");
					} 
				else if(users%2==0)
					{ 
						javax.swing.JOptionPane.showMessageDialog(null,"parts should be odd");
					} 
				else
					{ 
						String s1="",s2; 
						int j=0; 
						for(int i=0;i<users;i++)
							{ 
								j=j+1; 
								int check1=0,check2=0,check3=0,check4=0; 
								do
								{ 
									check1=0; 
									check2=0; 
									check3=0; 
									check4=0; 
									do
									{ 
										check1=0; 
										check2=0; 
										check3=0; 
										check4=0; 
										do
										{ 
											check1=0; 
											check2=0; 
											check3=0; 
											check4=0; 
											do
											{ 
												check1=0; 
												check2=0; 
												check3=0; 
												check4=0; 
												s2=javax.swing.JOptionPane.showInputDialog("the private key for user number "+j+" is ",""); 
												if(s2==null || s2.length()==0)
													{ 
														check4=1; 
														javax.swing.JOptionPane.showMessageDialog(null,"wrong operation performed");
													}
												} 
												while(check4==1); 
												int len=s2.length(); 
												for(int k=0;k<len;k++)
													{ 
														if((int)s2.charAt(k)<48 || (int)s2.charAt(k)>57)
															{ 
																check1=1; 
																javax.swing.JOptionPane.showMessageDialog(null,"only integers can be entered"); 
																break;
															}
														}
													} 
													while(check1==1); 
													if(s2.equals(s1))
														{ 
															check2=1; 
															javax.swing.JOptionPane.showMessageDialog(null,"wrong operation performed"); 
														}
													} 
													while(check2==1); 
													BigInteger bi=new BigInteger(s2); 
													if(bi.compareTo(p)>=0)
														{ 
															check3=1; 
															javax.swing.JOptionPane.showMessageDialog(null,"the private key should be less than the prime number");
														}
													} 
													while(check3==1); 
													BigInteger bi=new BigInteger(s2); 
													v.add(bi);
												} 
												try
												{ 
													javax.swing.JOptionPane.showMessageDialog(null,"the decryption has started"); 
													decryptClass dc=new decryptClass(); 
													dc.decryptMethod(p,gre,decryptedFileName,encryptedFileName,v); 
													javax.swing.JOptionPane.showMessageDialog(null,"the decrypted file is ready");
												} 
												catch(Exception e){} 
											}
										}
									}
								} 
 
 
 