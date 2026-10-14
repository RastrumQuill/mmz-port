// sub_0807E40C at 0x0807E40C (thumb)

undefined4 sub_0807E40C(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08006E08(param_1 + 0x74,&DAT_08340858);
    *(undefined4 *)(param_1 + 0x60) = 0xffffff00;
    *(undefined *)(param_1 + 0x12) = 0x80;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (0x200 < *(int *)(param_1 + 0x60)) {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -8;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 < 0x20) {
    if ((bVar1 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar2;
  }
  *(byte *)(param_1 + 0x12) = bVar1 - 1;
  if (bVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0807E1E8(param_1);
  }
  return in_lr;
}

