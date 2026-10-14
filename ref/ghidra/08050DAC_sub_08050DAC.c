// sub_08050DAC at 0x08050DAC (thumb)

undefined4 sub_08050DAC(int param_1)

{
  undefined4 in_lr;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_1c = *(undefined4 *)(param_1 + 0x4c);
  local_18 = *(undefined4 *)(param_1 + 0x50);
  sub_08001EAC(2);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0xbc);
  (&DAT_02022ad4)[(int)*(uint *)(&DAT_082af488 + (uint)*(byte *)(param_1 + 0x10) * 4) >> 3] =
       (byte)(1 << (*(uint *)(&DAT_082af488 + (uint)*(byte *)(param_1 + 0x10) * 4) & 7)) |
       (&DAT_02022ad4)[(int)*(uint *)(&DAT_082af488 + (uint)*(byte *)(param_1 + 0x10) * 4) >> 3];
  sub_080033F0(param_1 + 0x6c,1);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (*(char *)(param_1 + 0x10) == '\x02') {
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  else {
    *(bool *)(param_1 + 0xc0) = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0x12) = 0x79;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_0808ACFC(param_1,&local_1c);
  }
  return in_lr;
}

