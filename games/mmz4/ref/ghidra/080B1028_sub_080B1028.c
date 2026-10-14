// sub_080B1028 at 0x080B1028 (thumb)

undefined4 sub_080B1028(int param_1)

{
  byte bVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x8c) & 0x200) != 0) ||
     (pcVar3 = (char *)(param_1 + 0xc2), *pcVar3 == -1)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined *)(param_1 + 0xc2) = 0xff;
    sub_080B0CEC(param_1);
    return in_lr;
  }
  if (1 < *(byte *)(*(int *)(param_1 + 0x2c) + 0xc)) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (((DAT_02000a75 & 8) == 0) && (iVar4 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54), iVar4 == 0))
  {
    sub_08006984(0x2b);
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    bVar1 = *(byte *)(param_1 + 0xc1);
    if (bVar1 < 3) {
      sub_080B0DB4(param_1);
      if (*pcVar3 == '\0') {
        if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x4700) {
          sub_0801CF00(param_1);
        }
        sub_08128884(param_1,*(undefined4 *)(&DAT_0885fecc + (uint)*(byte *)(param_1 + 0xd) * 4));
        *(undefined *)(param_1 + 0x24) = *(undefined *)(param_1 + 0x13);
        cVar2 = *(char *)(param_1 + 0x13) + '\x01';
        *(char *)(param_1 + 0x13) = cVar2;
        if (cVar2 == -1) {
          *(undefined *)(param_1 + 0x13) = 0;
        }
      }
      else {
        sub_0801CF00(param_1,0xb901);
        sub_080B11C0(param_1);
      }
      goto LAB_080b113a;
    }
    *(byte *)(param_1 + 0xc1) = bVar1 + 1;
LAB_080b1146:
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  else {
    sub_080B0DFC(param_1);
LAB_080b113a:
    iVar4 = *(int *)(param_1 + 0x2c);
    if (iVar4 != 0) {
      if (1 < *(byte *)(iVar4 + 0xc)) goto LAB_080b1146;
      if (*(char *)(param_1 + 0x12) == '\0') {
        if (*(char *)(iVar4 + 0x12) != '\0') {
          *(char *)(param_1 + 0x12) = *(char *)(iVar4 + 0x12);
          cVar2 = *(char *)(iVar4 + 0xc2);
          *pcVar3 = cVar2;
          if (cVar2 == '\x0f') {
            sub_08005784(param_1 + 0x74,&DAT_0885feec);
          }
        }
      }
      else if (*(char *)(iVar4 + 0x12) == '\0') {
        *(char *)(iVar4 + 0x12) = *(char *)(param_1 + 0x12);
        *(char *)(*(int *)(param_1 + 0x2c) + 0xc2) = *pcVar3;
        if (*pcVar3 == '\x0f') {
          sub_08005784(*(int *)(param_1 + 0x2c) + 0x74,&DAT_0885feec);
        }
      }
    }
    sub_0801CFF0(param_1);
  }
  return in_lr;
}

