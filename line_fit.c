#include<TGraph.h>
#include<TF1.h>
#include<TStyle.h>

void setStyle(){
gROOT->SetStyle("Plain");	
gStyle->SetOptStat(111110110);
gStyle->SetOptFit(1111);
}

void line_fit(){
auto c1 = new TCanvas("c1","multigraph",700,500);
TGraph graph("Rrms_vs_sqrtN.txt");
graph.SetMarkerStyle(kOpenCircle);
graph.SetMarkerColor(kBlue);
graph.SetLineColor(kBlue);

graph.DrawClone("AP");

TF1 f("Linear Law","[0]+x*[1]",0,300);
f.SetLineColor(kRed);
f.SetParNames("offset","slope");
graph.Fit(&f);
f.DrawClone("same");

}	
