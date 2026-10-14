// sub_080E91C8 at 0x080E91C8 (thumb)

undefined4 sub_080E91C8(int param_1)

{
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  local_1c = *(int *)(param_1 + 0x54) + -0x400;
  local_18 = *(int *)(param_1 + 0x58) + -0xf00;
  sub_080D4898(&local_1c,&DAT_08865f44,0,0);
  local_1c = *(int *)(param_1 + 0x54) + 0x800;
  local_18 = *(int *)(param_1 + 0x58) + -0xf00;
  sub_080D4898(&local_1c,&DAT_08865f60,0,0);
  local_1c = *(int *)(param_1 + 0x54) + -0x400;
  local_18 = *(int *)(param_1 + 0x58) + 0x100;
  sub_080D4898(&local_1c,&DAT_08865f7c,0,0);
  local_1c = *(int *)(param_1 + 0x54);
  local_18 = *(int *)(param_1 + 0x58) + -0xc00;
  sub_080D0894(1,&local_1c);
  if (DAT_0202cabc < *(int *)(param_1 + 0x58)) {
    sub_08002B10(0x31);
  }
  else {
    sub_08002B10(0x2a);
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

