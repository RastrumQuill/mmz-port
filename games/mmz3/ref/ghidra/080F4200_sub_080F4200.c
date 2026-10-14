// sub_080F4200 at 0x080F4200 (thumb)

undefined4 sub_080F4200(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x64ac);
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0838bb24 + (uint)*(byte *)(param_1 + 3) * 4));
  if ((*(byte *)(param_1 + 0xddb) & 0x38) != 0) {
    sub_080F502C(param_1);
  }
  sub_080041E4(4);
  bVar1 = *(byte *)(param_1 + 0xddc);
  if (bVar1 < 6) {
    if (*(char *)(param_1 + 0xddd) == '\0') {
      if (bVar1 != *(byte *)(iVar3 + 0xc4)) {
        *(byte *)(param_1 + 0xddd) = bVar1 + 0xab;
        sub_080040A8(*(undefined *)(param_1 + 0xddd),0);
      }
      if (*(char *)(param_1 + 0xddd) == '\0') goto LAB_080f42ca;
    }
    cVar2 = sub_080041E4(*(undefined *)(param_1 + 0xddd));
    if (cVar2 == '\x03') {
      sub_08004230(*(undefined *)(param_1 + 0xddd));
      if (*(byte *)(param_1 + 0xddd) < 0xb3) {
        cVar2 = *(char *)(iVar3 + 0xc4);
        *(char *)(param_1 + 0xddc) = cVar2;
        *(char *)(param_1 + 0xddd) = cVar2 + -0x4d;
        sub_080040A8(*(undefined *)(param_1 + 0xddd),0);
        sub_080041E4(*(undefined *)(param_1 + 0xddd));
      }
      else {
        *(char *)(param_1 + 0xddd) = *(char *)(iVar3 + 0xc4) + -0x55;
        sub_080040A8(*(undefined *)(param_1 + 0xddd),0);
        sub_080041E4(*(undefined *)(param_1 + 0xddd));
        sub_08004230(*(undefined *)(param_1 + 0xddd));
        *(undefined *)(param_1 + 0xddd) = 0;
      }
    }
  }
LAB_080f42ca:
  sub_080F5184(param_1);
  return in_lr;
}

