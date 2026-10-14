// sub_0802AFB0 at 0x0802AFB0 (thumb)

undefined4 sub_0802AFB0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x178) == '\a') {
    uVar1 = (uint)*(byte *)(param_1 + 0x179);
  }
  else {
    uVar1 = 0;
  }
  sub_080EF118(param_1,(&DAT_08333d4c)[uVar1]);
  if ((*(char *)(short *)(param_1 + 0x178) == '\a') || (*(short *)(param_1 + 0x178) == 4)) {
    if (*(char *)(param_1 + 0x17f) != 'K') {
      sub_0801E9FC(param_1,0x4b);
    }
    uVar2 = sub_08035F60(param_1,&DAT_08335dbc);
    *(undefined4 *)(param_1 + 0x2d4) = uVar2;
    uVar2 = sub_08035F74(param_1,&DAT_08335dbc);
    *(undefined4 *)(param_1 + 0x2d8) = uVar2;
  }
  return in_lr;
}

