// sub_080FF408 at 0x080FF408 (thumb)

undefined4 sub_080FF408(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0xc0) == 0) {
    if (((*(uint *)(param_1 + 0x8c) & 1) == 0) || ((*(byte *)(param_1 + 0x97) & 0xf0) != 0x30)) {
LAB_080ff454:
      if (*(int *)(param_1 + 0xc0) != 0) goto LAB_080ff45e;
    }
    else {
      iVar2 = sub_0802AD94(0,param_1,&DAT_08868108);
      *(int *)(param_1 + 0xc0) = iVar2;
      if (iVar2 != 0) {
        sub_0801CF00(param_1,0xa908);
        sub_08005784(param_1 + 0x74,&DAT_088680f0);
        goto LAB_080ff454;
      }
    }
    bVar1 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if (0x78 < bVar1) {
      sub_08002B10(0x161);
      *(undefined *)(param_1 + 0x12) = 0;
    }
  }
  else {
LAB_080ff45e:
    iVar2 = sub_0802B3CC(*(undefined4 *)(param_1 + 0xc0));
    if (iVar2 != 0) {
      sub_0801CF00(param_1,0xa909);
      sub_08005784(param_1 + 0x74,&DAT_088680c0);
      *(undefined4 *)(param_1 + 0xc0) = 0;
    }
  }
  sub_0801CFF0(param_1);
  return in_lr;
}

