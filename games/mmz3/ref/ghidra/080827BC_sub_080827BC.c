// sub_080827BC at 0x080827BC (thumb)

undefined4 sub_080827BC(int param_1)

{
  undefined uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar1 = *(undefined *)(param_1 + 0x24);
    sub_08017528(param_1);
    sub_08017700(param_1,0x5902);
    *(undefined *)(param_1 + 0x24) = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') goto LAB_080827ee;
  sub_080177F4(param_1);
LAB_080827ee:
  if (1 < *(byte *)(*(int *)(param_1 + 0xbc) + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  return in_lr;
}

