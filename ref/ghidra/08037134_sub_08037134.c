// sub_08037134 at 0x08037134 (thumb)

undefined4 sub_08037134(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  *(undefined2 *)(param_1 + 0xe) = 1;
  sub_0800561C(param_1 + 0x74,&DAT_082ad7fc);
  sub_08038B64(param_1);
  uVar1 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar1 & 0x7fffffff;
  if ((uVar1 * 2 >> 0x11 & 6) == 0) {
    uVar2 = 0xfffff940;
  }
  else {
    uVar2 = 0xfffffa40;
  }
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  return in_lr;
}

