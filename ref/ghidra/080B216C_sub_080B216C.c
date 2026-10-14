// sub_080B216C at 0x080B216C (thumb)

undefined4 sub_080B216C(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined4 local_40 [4];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  int local_24;
  
  local_40[0] = 0x19;
  local_40[1] = 7;
  local_40[2] = 6;
  local_40[3] = 0x1a;
  uStack_30 = 7;
  uStack_2c = 6;
  local_28 = *(undefined4 *)(param_1 + 0x4c);
  local_24 = *(int *)(param_1 + 0x50) + -0x1000;
  sub_0808827C(1);
  sub_08001EAC(2);
  uVar1 = DAT_02022890 * 0x343fd + 0x269ec3;
  uVar2 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar2 & 0x7fffffff;
  sub_0809BC78(param_1,-((uVar1 * 2 >> 0x11 & 0xff) + 0x80),((uVar2 * 2 >> 0x11 & 7) + 8) * -0x40,1)
  ;
  uVar1 = DAT_02022890 * 0x343fd + 0x269ec3;
  uVar2 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar2 & 0x7fffffff;
  sub_0809BC78(param_1,(uVar1 * 2 >> 0x11 & 0xff) + 0x80,((uVar2 * 2 >> 0x11 & 3) + 6) * -0x40,1);
  uVar1 = DAT_02022890 * 0x343fd + 0x269ec3;
  uVar2 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar2 & 0x7fffffff;
  sub_0809BC78(param_1,-((uVar1 * 2 >> 0x11 & 0xff) + 0xa0),((uVar2 * 2 >> 0x11 & 7) + 2) * -0x40,2)
  ;
  uVar1 = DAT_02022890 * 0x343fd + 0x269ec3;
  uVar2 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar2 & 0x7fffffff;
  sub_0809BC78(param_1,(uVar1 * 2 >> 0x11 & 0xff) + 0xa0,((uVar2 * 2 >> 0x11 & 3) + 4) * -0x40,2);
  sub_08015698(local_40[*(byte *)(param_1 + 0x10)],param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  return in_lr;
}

