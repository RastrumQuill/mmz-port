// sub_0802B818 at 0x0802B818 (thumb)

undefined4 sub_0802B818(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 0x181) = *(byte *)(param_1 + 0x181) & 0x7f;
  sub_08033960(param_1,1);
  *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
  *(undefined *)(param_1 + 0x177) = 1;
  *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
  *(undefined *)(param_1 + 0x178) = 0;
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 0;
  sub_08034C88(param_1,0x17);
  *(undefined *)(param_1 + 0x2b9) = 2;
  sub_0802B88C(param_1);
  return in_lr;
}

