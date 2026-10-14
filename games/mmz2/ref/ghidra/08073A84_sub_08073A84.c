// sub_08073A84 at 0x08073A84 (thumb)

undefined4 sub_08073A84(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
    if (*(char *)(param_1 + 0x10) == '\0') {
      sub_08073DCC(param_1);
    }
    else {
      sub_08073DFC(param_1);
    }
    cVar1 = *(char *)(param_1 + 0xd);
    if (cVar1 == '\0') {
      sub_08073EF8(param_1);
    }
    else if (cVar1 == '\x01') {
      sub_08073F30(param_1);
    }
    else if (cVar1 == '\x02') {
      sub_08074030(param_1);
    }
    else {
      sub_08074060(param_1);
    }
    sub_080128D4(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08073AFC(param_1);
  }
  return in_lr;
}

