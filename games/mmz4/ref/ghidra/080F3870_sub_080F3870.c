// sub_080F3870 at 0x080F3870 (thumb)

undefined4 sub_080F3870(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  *(char *)(param_1 + 0x10) = *(char *)(param_1 + 0x10) * '\x03';
  switch(*(undefined *)(param_1 + 0x11)) {
  default:
    goto switchD_080f388a_caseD_0;
  case 1:
  case 7:
    cVar1 = *(char *)(param_1 + 0x10) + '\x01';
    break;
  case 2:
  case 3:
  case 5:
  case 6:
    cVar1 = *(char *)(param_1 + 0x10) + '\x02';
  }
  *(char *)(param_1 + 0x10) = cVar1;
switchD_080f388a_caseD_0:
  sub_08128884(param_1,*(undefined4 *)(&DAT_08866a58 + (uint)*(byte *)(param_1 + 0x10) * 4));
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080F38F4(param_1);
  return in_lr;
}

