// sub_080377A4 at 0x080377A4 (thumb)

undefined4 sub_080377A4(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xf) = 1;
  uVar2 = sub_080C8AD0(*(int *)(param_1 + 0xe4) - *(int *)(param_1 + 0x4c),0x2e);
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  *(undefined4 *)(param_1 + 0x58) = 0xfffffa40;
  sub_08038B64(param_1);
  *(undefined4 *)(param_1 + 200) = 0;
  uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
  uVar4 = uVar3 & 0x7fffffff;
  DAT_02022890 = uVar4;
  cVar1 = sub_080C8CB0(uVar3 * 2 >> 0x11,3);
  *(char *)(param_1 + 0xcc) = cVar1 + '\x02';
  uVar3 = uVar4 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar3 & 0x7fffffff;
  *(byte *)(param_1 + 0xcd) = (byte)(uVar3 * 2 >> 0x11) & 1;
  sub_0803783C(param_1);
  return in_lr;
}

