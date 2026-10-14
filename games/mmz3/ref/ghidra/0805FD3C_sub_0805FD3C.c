// sub_0805FD3C at 0x0805FD3C (thumb)

undefined4 sub_0805FD3C(int param_1)

{
  undefined4 in_lr;
  
  sub_08007390(param_1 + 0x74,&DAT_08361b18);
  sub_080175BC(param_1);
  sub_080176EC(param_1);
  sub_08060768(param_1,0xf);
  *(undefined *)(param_1 + 0xf) = 1;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 4;
  return in_lr;
}

