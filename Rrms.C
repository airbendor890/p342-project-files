void Rrms()
{
//=========Macro generated from canvas: c1/c1
//=========  (Thu Jan 28 20:59:37 2021) by ROOT version 6.18/00
   TCanvas *c1 = new TCanvas("c1", "c1",79,64,700,502);
   c1->Range(10.94113,10.33389,40.22559,39.92576);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1[5] = {
   15.79739,
   22.31089,
   27.34736,
   31.58935,
   35.32734};
   Double_t Graph0_fy1[5] = {
   15.34957,
   22.64813,
   27.1988,
   31.6501,
   35.0356};
   TGraph *graph = new TGraph(5,Graph0_fx1,Graph0_fy1);
   graph->SetName("Graph0");
   graph->SetTitle("Rrms vs N^{1/2}");
   graph->SetFillStyle(1000);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01 = new TH1F("Graph_Graph01","Rrms vs N^{1/2}",100,13.85699,37.30973);
   Graph_Graph01->SetMinimum(13.34962);
   Graph_Graph01->SetMaximum(36.97285);
   Graph_Graph01->SetDirectory(0);
   Graph_Graph01->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01->SetLineColor(ci);
   Graph_Graph01->GetXaxis()->SetTitle("N^{1/2}");
   Graph_Graph01->GetXaxis()->SetLabelFont(42);
   Graph_Graph01->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph01->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph01->GetXaxis()->SetTitleOffset(1);
   Graph_Graph01->GetXaxis()->SetTitleFont(22);
   Graph_Graph01->GetYaxis()->SetTitle("R_rms");
   Graph_Graph01->GetYaxis()->SetLabelFont(42);
   Graph_Graph01->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph01->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph01->GetYaxis()->SetTitleFont(22);
   Graph_Graph01->GetZaxis()->SetLabelFont(42);
   Graph_Graph01->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph01->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph01->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph01);
   
   graph->Draw("AP");
   
   TPaveText *pt = new TPaveText(0.3374212,0.9338535,0.5579943,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Rrms vs N^{1/2}");
   pt->Draw();
   
   TF1 *f1 = new TF1("f","x",0,100, TF1::EAddToList::kDefault);
   f1->SetFillColor(19);
   f1->SetFillStyle(0);
   f1->SetLineColor(2);
   f1->SetLineWidth(2);
   f1->GetXaxis()->SetLabelFont(42);
   f1->GetXaxis()->SetLabelSize(0.035);
   f1->GetXaxis()->SetTitleSize(0.035);
   f1->GetXaxis()->SetTitleOffset(1);
   f1->GetXaxis()->SetTitleFont(42);
   f1->GetYaxis()->SetLabelFont(42);
   f1->GetYaxis()->SetLabelSize(0.035);
   f1->GetYaxis()->SetTitleSize(0.035);
   f1->GetYaxis()->SetTitleFont(42);
   f1->Draw("same");
   
   TLegend *leg = new TLegend(0.09885387,0.6305732,0.3309456,0.9002123,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("f","y=x","lpf");
   entry->SetFillColor(19);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","Rrms vs Sqrt(N) data","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
