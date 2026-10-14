// sub_080BF270 at 0x080BF270 (thumb)

undefined4 sub_080BF270(int param_1)

{
  undefined4 in_lr;
  
  sub_080C1FE0();
  *(undefined4 *)(param_1 + 0x6e94) = 0;
  sub_0800F388(param_1 + 0x6ea4);
  sub_0800F3E8(param_1 + 0x6ef0);
  sub_0800F450(*(undefined *)(undefined4 *)(param_1 + 0x6e94),param_1 + 0x6ef0);
  sub_0801C820(param_1 + 0x6f24,0);
  sub_080BF0A4(param_1,0x20010200);
  return in_lr;
}

