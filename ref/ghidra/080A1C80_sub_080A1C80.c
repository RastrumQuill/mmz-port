// sub_080A1C80 at 0x080A1C80 (thumb)

undefined4 sub_080A1C80(int param_1)

{
  undefined4 in_lr;
  undefined4 local_10;
  int local_c;
  
  local_10 = *(undefined4 *)(param_1 + 0x4c);
  local_c = *(int *)(param_1 + 0x50) + 0x2800;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  sub_0809C980(param_1);
  sub_080921A4(param_1,1,0);
  sub_080921A4(param_1,1,1);
  sub_080921A4(param_1,1,2);
  sub_080921A4(param_1,1,3);
  sub_080921A4(param_1,1,4);
  sub_0808827C(1,&local_10);
  sub_08015698(0,param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

