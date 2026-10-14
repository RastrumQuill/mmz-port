// sub_080A326C at 0x080A326C (thumb)

undefined4 sub_080A326C(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  iVar8 = *(int *)(param_1 + 0x28);
  sub_080128D4();
  iVar9 = *(int *)(iVar8 + 0xd4);
  iVar3 = *(int *)(iVar8 + 0xd8);
  if (*(int *)(iVar8 + 0x54) < iVar9) {
    *(undefined *)(param_1 + 0x13) = 2;
    bVar1 = *(byte *)(param_1 + 0x49) & 0xf3;
    bVar6 = 8;
  }
  else {
    *(undefined *)(param_1 + 0x13) = 3;
    bVar1 = *(byte *)(param_1 + 0x49);
    bVar6 = 0xc;
  }
  *(byte *)(param_1 + 0x49) = bVar1 | bVar6;
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(int *)(param_1 + 0x54) = iVar9;
    *(int *)(param_1 + 0x58) = iVar3;
    if (*(char *)(param_1 + 0x11) == '\0') {
      if (*(byte *)(iVar8 + 0xd) < 0x27) goto LAB_080a33de;
      sub_08006E08(param_1 + 0x74,&DAT_08344860);
      *(undefined *)(*(int *)(param_1 + 0xc0) + 0xd) = 1;
    }
    else {
      if (*(byte *)(iVar8 + 0xd) < 0x1f) goto LAB_080a33de;
      sub_08006E08(param_1 + 0x74,&DAT_08344860);
    }
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(undefined *)(param_1 + 0x12) = 0x10;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar7 = (uint)*(byte *)(param_1 + 0x12) * (iVar9 - *(int *)(iVar8 + 100));
      if (iVar7 < 0) {
        iVar7 = iVar7 + 0xf;
      }
      *(int *)(param_1 + 0x54) = *(int *)(iVar8 + 100) + (iVar7 >> 4);
      iVar7 = (uint)*(byte *)(param_1 + 0x12) * (iVar3 - *(int *)(iVar8 + 0x68));
      if (iVar7 < 0) {
        iVar7 = iVar7 + 0xf;
      }
      *(int *)(param_1 + 0x58) = *(int *)(iVar8 + 0x68) + (iVar7 >> 4);
      bVar1 = *(byte *)(param_1 + 0x12);
      *(byte *)(param_1 + 0x12) = bVar1 + 1;
      if (0xf < bVar1) {
        if (*(char *)(param_1 + 0x11) == '\0') {
          local_1c = iVar9;
          local_18 = iVar3;
          uVar4 = sub_0807AC48(&local_1c,0,0);
          *(undefined4 *)(param_1 + 0xc0) = uVar4;
          sub_080A3028(&local_1c);
        }
        sub_08006E08(param_1 + 0x74,&DAT_08344830);
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
    }
  }
  else if (bVar1 == 2) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    iVar9 = (uint)*(byte *)(param_1 + 0x12) * (iVar9 - *(int *)(iVar8 + 100));
    if (iVar9 < 0) {
      iVar9 = iVar9 + 0xf;
    }
    *(int *)(param_1 + 0x54) = *(int *)(iVar8 + 100) + (iVar9 >> 4);
    iVar3 = (uint)*(byte *)(param_1 + 0x12) * (iVar3 - *(int *)(iVar8 + 0x68));
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    *(int *)(param_1 + 0x58) = *(int *)(iVar8 + 0x68) + (iVar3 >> 4);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080A30A8(param_1);
    }
  }
LAB_080a33de:
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(iVar8 + 100);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(iVar8 + 0x68);
  uVar5 = sub_080EEF64((*(int *)(param_1 + 0x54) - *(int *)(iVar8 + 100)) * 0x10 >> 0x10,
                       (*(int *)(param_1 + 0x58) - *(int *)(iVar8 + 0x68)) * 0x10 >> 0x10);
  *(char *)(param_1 + 0x24) = (char)((uVar5 & 0xffff) + 0x4000 >> 8);
  return in_lr;
}

