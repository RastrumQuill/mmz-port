// sub_0802C54C at 0x0802C54C (thumb)

undefined4 sub_0802C54C(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x2b7) = 0;
  if ((*(ushort *)(param_1 + 0x218) & 0x20) == 0) {
    *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
    *(undefined *)(param_1 + 0x178) = 1;
    *(byte *)(param_1 + 0x17d) = *(byte *)(param_1 + 0x179);
    *(byte *)(param_1 + 0x179) = (byte)*(ushort *)(param_1 + 0x218) & 0x20;
    sub_0802C5D0(param_1);
  }
  else {
    *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
    *(undefined *)(param_1 + 0x178) = 2;
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 0;
    sub_0802CA0C(param_1);
  }
  return in_lr;
}

