// sub_0809AF8C at 0x0809AF8C (thumb)

undefined4 sub_0809AF8C(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    iVar5 = *(int *)(param_1 + 0x28);
    if ((*(byte *)(iVar5 + 0xc) < 2) && (iVar4 = sub_08065A24(iVar5), iVar4 == 0)) {
      if (*(char *)(iVar5 + 0xd) == '\b') {
        bVar1 = *(byte *)(param_1 + 10) >> 4;
        if ((bool)(~bVar1 & 1) != *(int *)(DAT_0202e130 + 0x54) < *(int *)(param_1 + 0x54)) {
          *(undefined *)(param_1 + 0xf) = 1;
        }
        sub_080B2A10(param_1 + 0x54,0,bVar1 & 1);
        *(undefined *)(param_1 + 0x12) = 0x80;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
LAB_0809b07c:
      sub_080128D4(param_1);
      return in_lr;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar5;
    sVar3 = sub_08008CFC(iVar5 + *(int *)(param_1 + 100),*(undefined4 *)(param_1 + 0x58));
    if (((((sVar3 == 0) || (sVar3 == -0x7ff1)) || (sVar3 == -0x7ff2)) &&
        (((*(uint *)(param_1 + 0x8c) & 4) == 0 &&
         (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 != -1))))
       && ((*(char *)(param_1 + 0xf) != '\0' ||
           ((bool)(~(*(byte *)(param_1 + 10) >> 4) & 1) ==
            *(int *)(DAT_0202e130 + 0x54) < *(int *)(param_1 + 0x54) + *(int *)(param_1 + 100)))))
    goto LAB_0809b07c;
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
  sub_0809AD78(param_1);
  return in_lr;
}

