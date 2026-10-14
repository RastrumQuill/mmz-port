// sub_08122CB0 at 0x08122CB0 (thumb)

undefined4 sub_08122CB0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  undefined4 local_18 [2];
  
  *(int *)(param_1 + 0x1ed8) = *(int *)(param_1 + 0x1ed8) + 1;
  iVar1 = param_1 + 0x9a0;
  sub_08003470(iVar1);
  DAT_0202dc04 = 0;
  local_18[0] = 0;
  sub_081284E4(local_18,&DAT_0202dc10,0x1000008);
  sub_0801CA0C(DAT_0202eda0,iVar1);
  sub_0801CA0C(DAT_0202ed90,iVar1);
  sub_0801CA0C(DAT_0202ed84,iVar1);
  sub_0803A7E8(iVar1);
  sub_0801C924(DAT_0202ed94,iVar1);
  sub_0801C924(DAT_0202ed9c,iVar1);
  sub_0801CA0C(DAT_0202eda4,iVar1);
  sub_0810DE84();
  sub_08006D2C(iVar1);
  sub_08003420(iVar1);
  if (*(char *)(param_1 + 3) == '\0') {
    if ((DAT_0202f38a == 0) || (DAT_0202f38a == 4)) {
      if (*(short *)(param_1 + 6) == 1) {
        if ((DAT_02000766 & 0xc0) != 0) {
          sub_08002B10(1);
          *(undefined2 *)(param_1 + 6) = 0;
        }
      }
      else if ((DAT_02000766 & 0xc0) != 0) {
        sub_08002B10(1);
        *(undefined2 *)(param_1 + 6) = 1;
      }
      sub_0810D214(&DAT_0886a17c,8,*(short *)(param_1 + 6) * 2 + 3);
      if ((DAT_02000766 & 1) == 0) {
        if ((DAT_02000766 & 2) == 0) {
          return in_lr;
        }
        sub_08002B10(3);
        *(undefined2 *)(param_1 + 6) = 1;
      }
      else {
        sub_08002B10(2);
      }
      *(undefined *)(param_1 + 3) = 1;
      DAT_0202f388 = DAT_0202f388 | 2;
    }
  }
  else if (DAT_0202f38a == 0) {
    if (*(short *)(param_1 + 6) == 0) {
      *(undefined *)(param_1 + 0xde4) = 2;
    }
    *(undefined *)(param_1 + 2) = 1;
  }
  return in_lr;
}

