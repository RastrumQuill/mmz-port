// sub_0804D324 at 0x0804D324 (thumb)

undefined4 sub_0804D324(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 4);
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_080033F0(param_1 + 0x6c,5);
    sub_080014E8(&DAT_084b803c,(DAT_02022ea6 - 0x230) * 0x20 + 0x10000);
    sub_0800179C(&DAT_084b8048,(DAT_02022f33 - 5) * 0x20 + 0x200);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar1 + 0x50);
    *(undefined4 *)(param_1 + 0x54) = 0xfffffd00;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    if (*(int *)(iVar1 + 0x4c) + 0x1800 < *(int *)(param_1 + 0x4c)) {
      return in_lr;
    }
    sub_080033F0(param_1 + 0x6c,6);
    break;
  case 2:
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    if (*(int *)(iVar1 + 0x4c) < *(int *)(param_1 + 0x4c)) {
      return in_lr;
    }
    *(int *)(param_1 + 0x4c) = *(int *)(iVar1 + 0x4c);
    *(undefined4 *)(param_1 + 0x54) = 0;
    break;
  case 3:
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x54) = 0x200;
    *(undefined *)(param_1 + 0x12) = 0xff;
    break;
  case 4:
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    else {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    }
  default:
    goto switchD_0804d340_caseD_5;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0804d340_caseD_5:
  return in_lr;
}

