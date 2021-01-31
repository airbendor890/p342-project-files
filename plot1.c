#include<TGraph.h>
#include<TF1.h>
#include<TLegend.h>
#include<TCanvas.h>

{
	c=new TCanvas("c","plots",1000,2000);
	c->Divide(2,3);
	c->cd(1);
	auto mg1 = new TMultiGraph();
	g1=new TGraph("random_walk_250_1.txt");
	g1->SetMarkerColor(kBlue);
	g1->SetLineColor(kBlue);
	g2=new TGraph("random_walk_250_2.txt");
	g2->SetMarkerColor(kRed);
	g2->SetLineColor(kRed);
	g3=new TGraph("random_walk_250_3.txt");
	g3->SetMarkerColor(kGreen);
	g3->SetLineColor(kGreen);
	g4=new TGraph("random_walk_250_4.txt");
	g4->SetMarkerColor(kOrange);
	g4->SetLineColor(kOrange);
	g5=new TGraph("random_walk_250_5.txt");

	mg1->Add(g1);mg1->Add(g2);mg1->Add(g3);mg1->Add(g4);mg1->Add(g5);
		
	mg1->Draw("apc");



	c->cd(2);
	auto mg2 = new TMultiGraph();
	h1=new TGraph("random_walk_500_1.txt");
	h1->SetMarkerColor(kBlue);
	h1->SetLineColor(kBlue);
	h2=new TGraph("random_walk_500_2.txt");
	h2->SetMarkerColor(kRed);
	h2->SetLineColor(kRed);
	h3=new TGraph("random_walk_500_3.txt");
	h3->SetMarkerColor(kGreen);
	h3->SetLineColor(kGreen);
	h4=new TGraph("random_walk_500_4.txt");
	h4->SetMarkerColor(kOrange);
	h4->SetLineColor(kOrange);
	h5=new TGraph("random_walk_500_5.txt");

	mg2->Add(h1);mg2->Add(h2);mg2->Add(h3);mg2->Add(h4);mg2->Add(h5);
		
	mg2->Draw("apc");

	c->cd(3);
	auto mg3 = new TMultiGraph();
	i1=new TGraph("random_walk_750_1.txt");
	i1->SetMarkerColor(kBlue);
	i1->SetLineColor(kBlue);
	i2=new TGraph("random_walk_750_2.txt");
	i2->SetMarkerColor(kRed);
	i2->SetLineColor(kRed);
	i3=new TGraph("random_walk_750_3.txt");
	i3->SetMarkerColor(kGreen);
	i3->SetLineColor(kGreen);
	i4=new TGraph("random_walk_750_4.txt");
	i4->SetMarkerColor(kOrange);
	i4->SetLineColor(kOrange);
	i5=new TGraph("random_walk_750_5.txt");

	mg3->Add(i1);mg3->Add(i2);mg3->Add(i3);mg3->Add(i4);mg3->Add(i5);
		
	mg3->Draw("apc");


	c->cd(4);
	auto mg4 = new TMultiGraph();
	l1=new TGraph("random_walk_1000_1.txt");
	l1->SetMarkerColor(kBlue);
	l1->SetLineColor(kBlue);
	l2=new TGraph("random_walk_1000_2.txt");
	l2->SetMarkerColor(kRed);
	l2->SetLineColor(kRed);
	l3=new TGraph("random_walk_1000_3.txt");
	l3->SetMarkerColor(kGreen);
	l3->SetLineColor(kGreen);
	l4=new TGraph("random_walk_1000_4.txt");
	l4->SetMarkerColor(kOrange);
	l4->SetLineColor(kOrange);
	l5=new TGraph("random_walk_1000_5.txt");

	mg4->Add(l1);mg4->Add(l2);mg4->Add(l3);mg4->Add(l4);mg4->Add(l5);
		
	mg4->Draw("apc");


	c->cd(5);
	auto mg5 = new TMultiGraph();
	k1=new TGraph("random_walk_2000_1.txt");
	k1->SetMarkerColor(kBlue);
	k1->SetLineColor(kBlue);
	k2=new TGraph("random_walk_2000_2.txt");
	k2->SetMarkerColor(kRed);
	k2->SetLineColor(kRed);
	k3=new TGraph("random_walk_2000_3.txt");
	k3->SetMarkerColor(kGreen);
	k3->SetLineColor(kGreen);
	k4=new TGraph("random_walk_2000_4.txt");
	k4->SetMarkerColor(kOrange);
	k4->SetLineColor(kOrange);
	k5=new TGraph("random_walk_2000_5.txt");

	mg5->Add(k1);mg5->Add(k2);mg5->Add(k3);mg5->Add(k4);mg5->Add(k5);
		
	mg5->Draw("apc");

}
