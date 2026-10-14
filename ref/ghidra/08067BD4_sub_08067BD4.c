// sub_08067BD4 at 0x08067BD4 (thumb)

undefined4 sub_08067BD4(int param_1)

{
  undefined4 in_lr;
  
  sub_080033F0(param_1 + 0x6c,0);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(undefined *)(param_1 + 0xc5) = 0;
  *(undefined *)(param_1 + 199) = 1;
  if (((*(ushort *)(param_1 + 0x90) & 0x1000) == 0) || (*(char *)(param_1 + 0x11) == '\x01')) {
    *(undefined *)(param_1 + 0xd) = 1;
  }
  else if (*(char *)(param_1 + 0x11) == '\x02') {
    *(undefined *)(param_1 + 0xd) = 4;
  }
  else {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xc5) = 1;
  }
  *(undefined *)(param_1 + 0xe) = 1;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  return in_lr;
}

