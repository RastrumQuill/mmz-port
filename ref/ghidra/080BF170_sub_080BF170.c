// sub_080BF170 at 0x080BF170 (thumb)

undefined4 sub_080BF170(int param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x6e90) = 0;
  *(undefined *)(param_1 + 0x6e91) = 0;
  *(undefined *)(param_1 + 0x6e92) = 0;
  *(undefined *)(param_1 + 0x6e93) = 0;
  sub_080C1FE0(param_1);
  pbVar1 = (byte *)(param_1 + 0x6ea4);
  sub_0800F388(pbVar1);
  sub_0800F3E8(param_1 + 0x6ef0);
  sub_0800F450(*(undefined *)(param_1 + 0x6e94),param_1 + 0x6ef0);
  sub_0801C820(param_1 + 0x6f24,0);
  if ((*(char *)(param_1 + 0x1af2) == '\0') || ((DAT_02004ca4 & 0x100) == 0)) {
    if ((*(char *)(param_1 + 0x1af3) == '\0') || ((DAT_02004ca4 & 0x200) == 0)) {
      sub_080BF0A4(param_1,0x200);
      return in_lr;
    }
    *(undefined *)(param_1 + 0x6e93) = 1;
    *(undefined *)(param_1 + 0x6e91) = 1;
    *(byte *)(param_1 + 0x6ea4) = *(byte *)(param_1 + 0x6ea4) | 1;
  }
  else {
    *(undefined *)(param_1 + 0x6e92) = 1;
    *(undefined *)(param_1 + 0x6e93) = 1;
    *(undefined *)(param_1 + 0x6e91) = 2;
    *pbVar1 = *pbVar1 | 2;
    sub_0801C820(param_1 + 0x6f24,1);
  }
  sub_080BF0A4(param_1,0xb00);
  return in_lr;
}

