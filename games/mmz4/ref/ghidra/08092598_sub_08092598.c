// sub_08092598 at 0x08092598 (thumb)

undefined4 sub_08092598(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08002B10(0x6b);
    sub_0801CFC8(param_1,*(undefined2 *)
                          (&DAT_0885cf82 + ((int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 2)),
                 *(undefined *)(param_1 + 0x71),3);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    uVar2 = *(uint *)(param_1 + 0xc0) + 1;
    *(uint *)(param_1 + 0xc0) = uVar2;
    if (((uVar2 < 0x140) && (*(char *)(DAT_0202dbf0 + 0x278) != '\0')) &&
       (bVar1 = *(char *)(param_1 + 0x12) + 1, *(byte *)(param_1 + 0x12) = bVar1, 0x30 < bVar1)) {
      sub_0809294C(param_1);
      *(undefined *)(param_1 + 0x12) = 0;
    }
    uVar2 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
    if (0x4000 < uVar2) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
  }
  sub_0801CFF0(param_1);
  return in_lr;
}

