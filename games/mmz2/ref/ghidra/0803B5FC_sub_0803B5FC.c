// sub_0803B5FC at 0x0803B5FC (thumb)

undefined4 sub_0803B5FC(int param_1)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  iVar5 = sub_0803B88C(param_1,iVar7);
  if (iVar5 == 0) {
    if ((*(uint *)(param_1 + 0x8c) & 0x1020) == 0) {
      *(undefined *)(param_1 + 0x13) = 0;
    }
    else if (*(char *)(param_1 + 0x13) == '\0') {
      sub_080032EC(0x2b);
      *(undefined *)(param_1 + 0x13) = 1;
    }
    cVar1 = *(char *)(param_1 + 0x12);
    cVar2 = *(char *)(param_1 + 0x71);
    sub_080EF118(param_1,*(undefined4 *)(&DAT_08337c30 + (uint)*(byte *)(param_1 + 0xd) * 4));
    if (*(char *)(param_1 + 0xc) == '\x01') {
      uVar6 = *(undefined4 *)(iVar7 + 0x58);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar7 + 0x54);
      *(undefined4 *)(param_1 + 0x58) = uVar6;
      bVar3 = *(byte *)(iVar7 + 10) >> 4 & 1;
      if (bVar3 == 0) {
        bVar4 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar4 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar4;
      *(byte *)(param_1 + 0x4c) = bVar3;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar3 << 4;
      sub_080128D4(param_1);
      if ((*(char *)(param_1 + 0x12) == cVar1) && (*(char *)(param_1 + 0x71) == cVar2)) {
        return in_lr;
      }
      sub_0803B8E4(param_1);
      return in_lr;
    }
  }
  sub_0803B710(param_1);
  return in_lr;
}

