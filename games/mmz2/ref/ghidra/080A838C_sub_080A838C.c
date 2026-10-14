// sub_080A838C at 0x080A838C (thumb)

undefined4 sub_080A838C(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  if (1 < *(byte *)(iVar6 + 0xc)) {
    sub_080B919C(param_1 + 0x54,3);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  if (*(char *)(param_1 + 0xe) != '\0') {
    if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    goto LAB_080a84c8;
  }
  *(undefined *)(param_1 + 0x22) = 1;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar6 + 0x58);
  *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) & 0xee;
  sub_08006E08(param_1 + 0x74,&DAT_0834513c);
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
  sub_080127E4(param_1,0x6900);
  pbVar3 = (byte *)(param_1 + 0xb5);
  uVar5 = *pbVar3 ^ 1;
  if (uVar5 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar5;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((uVar5 & 1) << 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x5c) = 0x300;
  *(uint *)(param_1 + 0x5c) = (uint)*pbVar3 * -0x600 + 0x300;
  if (*pbVar3 == 0) {
    iVar2 = DAT_0202ed50 + -0x7800;
    iVar4 = *(int *)(iVar6 + 0x54);
    if (iVar4 < iVar2) goto LAB_080a84b2;
LAB_080a84c0:
    *(int *)(param_1 + 0x54) = iVar2;
  }
  else {
    iVar2 = DAT_0202ed50 + 0x77ff;
    iVar4 = *(int *)(iVar6 + 0x54);
    if (iVar4 <= iVar2) goto LAB_080a84c0;
LAB_080a84b2:
    *(int *)(param_1 + 0x54) = iVar4;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_080a84c8:
  iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar2;
  if ((iVar2 - *(int *)(iVar6 + 0x54)) + 0x300U < 0x601) {
    *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) & 0xf7 | 1;
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080128D4(param_1);
  return in_lr;
}

