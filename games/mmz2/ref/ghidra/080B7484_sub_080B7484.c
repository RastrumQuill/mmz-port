// sub_080B7484 at 0x080B7484 (thumb)

undefined4 sub_080B7484(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    sub_080127E4(param_1,0x5603);
  }
  else {
    sub_080127E4(param_1,0x5c0c);
  }
  sub_080128D4(param_1);
  uVar1 = *(undefined4 *)(iVar2 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  if (*(char *)(param_1 + 0x11) == '\0') {
    uVar3 = 0;
    do {
      sub_080B7330(param_1,(*(byte *)(param_1 + 0x10) & 1) + 4,uVar3 & 0xff);
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < 4);
  }
  else {
    sub_080B7330(param_1,(*(byte *)(param_1 + 0x10) & 1) + 4,1);
    sub_080B7330(param_1,(*(byte *)(param_1 + 0x10) & 1) + 4,3);
  }
  *(undefined *)(param_1 + 0x12) = 4;
  sub_080032EC(0x3f);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080B7398(param_1);
  return in_lr;
}

