// sub_080F6414 at 0x080F6414 (thumb)

undefined4 sub_080F6414(int param_1,undefined param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  sub_080F64A8(param_1 + 0x54,param_2);
  iVar1 = sub_080F6480();
  if ((DAT_02000c80 & 0x7f) == 10) {
    uVar2 = sub_08128A9C(DAT_0202dae0,(iVar1 + 0x3c) * 2);
  }
  else {
    uVar2 = 0;
  }
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      sub_08128884(param_1,*(undefined4 *)(&DAT_08866cc0 + (uint)*(byte *)(param_1 + 0xd) * 4));
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return in_lr;
}

