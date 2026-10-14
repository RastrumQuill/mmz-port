// sub_0805F3B0 at 0x0805F3B0 (thumb)

undefined4 sub_0805F3B0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  *(undefined2 *)(param_1 + 0xe) = 1;
  sub_08007390(param_1 + 0x74,&DAT_08361a88);
  sub_08060890(param_1);
  uVar1 = DAT_0202f608 * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar1 & 0x7fffffff;
  if ((uVar1 * 2 >> 0x11 & 6) == 0) {
    uVar2 = 0xfffff940;
  }
  else {
    uVar2 = 0xfffffa40;
  }
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  return in_lr;
}

