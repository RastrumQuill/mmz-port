// sub_080CBBD4 at 0x080CBBD4 (thumb)

undefined4 sub_080CBBD4(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\x04') {
    uVar3 = DAT_02030108 & 0x40;
    if ((DAT_02030108 & 0x40) == 0) {
      if ((*(int *)(param_1 + 0x28) == 0) || (*(char *)(*(int *)(param_1 + 0x28) + 0xc) != '\x04'))
      goto LAB_080cbc44;
      bVar1 = *(byte *)(param_1 + 10);
    }
    else {
      bVar1 = *(byte *)(param_1 + 10);
      uVar3 = 0;
    }
    *(byte *)(param_1 + 10) = bVar1 & 0xfc;
    *(uint *)(param_1 + 0x8c) = uVar3;
    *(uint *)(param_1 + 0x90) = uVar3;
    *(char *)(param_1 + 0x94) = (char)uVar3;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  else {
LAB_080cbc44:
    cVar2 = sub_080CB874(param_1);
    if (cVar2 == '\0') {
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836c63c + (uint)*(byte *)(param_1 + 0xd) * 4));
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836c648 + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
  }
  return in_lr;
}

