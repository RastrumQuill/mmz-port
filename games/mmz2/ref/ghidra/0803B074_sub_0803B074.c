// sub_0803B074 at 0x0803B074 (thumb)

undefined4 sub_0803B074(int param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  iVar4 = sub_0803B504(param_1,iVar6);
  if (iVar4 == 0) {
    if ((*(uint *)(param_1 + 0x8c) & 0x1020) == 0) {
      *(undefined *)(param_1 + 0x13) = 0;
    }
    else if (*(char *)(param_1 + 0x13) == '\0') {
      sub_080032EC(0x2b);
      *(undefined *)(param_1 + 0x13) = 1;
    }
    cVar1 = *(char *)(param_1 + 0x71);
    sub_080EF118(param_1,*(undefined4 *)(&DAT_08337b48 + (uint)*(byte *)(param_1 + 0xd) * 4));
    if (*(char *)(param_1 + 0xc) == '\x01') {
      uVar5 = *(undefined4 *)(iVar6 + 0x58);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar6 + 0x54);
      *(undefined4 *)(param_1 + 0x58) = uVar5;
      bVar2 = *(byte *)(iVar6 + 10) >> 4 & 1;
      if (bVar2 == 0) {
        bVar3 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar3 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar3;
      *(byte *)(param_1 + 0x4c) = bVar2;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar2 << 4;
      sub_080128D4(param_1);
      if (*(char *)(param_1 + 0x71) != cVar1) {
        sub_0803B530(param_1,0);
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08336060)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

