// sub_080A4C98 at 0x080A4C98 (thumb)

undefined4 sub_080A4C98(int param_1)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined4 in_lr;
  
  if ((DAT_0202ebbb & 0x20) == 0) {
    puVar5 = (uint *)(param_1 + 0x8c);
    if ((*puVar5 & 0x200) == 0) {
      sub_080128D4(param_1);
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 != '\0') {
        uVar3 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
        if (0x2000 < uVar3) {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
          *puVar5 = 0;
          *(undefined4 *)(param_1 + 0x90) = 0;
          *(undefined *)(param_1 + 0x94) = 0;
          goto LAB_080a4d18;
        }
        if ((*puVar5 & 4) == 0) {
          iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
          *(int *)(param_1 + 0x54) = iVar4;
          sVar2 = sub_08008CFC(iVar4,*(undefined4 *)(param_1 + 0x58));
          if (sVar2 == 0) {
            return in_lr;
          }
          *(undefined4 *)(param_1 + 0xc) = 2;
          *(undefined4 *)(param_1 + 0x14) =
               *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
          sub_080A4D9C(param_1);
          return in_lr;
        }
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_080A4D9C(param_1);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
LAB_080a4d18:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

