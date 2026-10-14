// sub_0809960C at 0x0809960C (thumb)

undefined4 sub_0809960C(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0x6901);
    sub_08002B10(0x133);
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar2 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar2;
    if (iVar2 < 0) goto LAB_08099748;
    sub_0801CF00(param_1,0x6904);
    sub_08005784(param_1 + 0x74,&DAT_0885d858);
    local_14 = *(int *)(param_1 + 0x54) + -0x1000;
    local_10 = *(int *)(param_1 + 0x58) + -0xf00;
    sub_080C5CF0(&local_14,0,0);
    local_14 = *(int *)(param_1 + 0x54) + 0x1000;
    local_10 = *(int *)(param_1 + 0x58) + -0xf00;
    sub_080C5CF0(&local_14,0,1);
    sub_08002B10(0x2d);
  }
  else if (bVar1 < 2) {
    if ((bVar1 != 0) || (*(char *)(param_1 + 0x73) != '\x03')) goto LAB_08099748;
    sub_0801CF00(param_1,0x6902);
    sub_08005784(param_1 + 0x74,&DAT_0885d858);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x68) * -0x19;
  }
  else {
    if (bVar1 != 2) {
      if ((bVar1 == 3) && (*(char *)(param_1 + 0x73) == '\x03')) {
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      goto LAB_08099748;
    }
    iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar2;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    if (iVar2 <= *(int *)(param_1 + 0xb8)) goto LAB_08099748;
    sub_0801CF00(param_1,0x6903);
    sub_08005784(param_1 + 0x74,&DAT_0885d828);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
    *(undefined *)(param_1 + 0x12) = 0x10;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
LAB_08099748:
  sub_0801CFF0(param_1);
  return in_lr;
}

