// sub_0803F13C at 0x0803F13C (thumb)

undefined4 sub_0803F13C(int param_1)

{
  byte bVar1;
  undefined uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xe) == '\0') {
    bVar1 = *(byte *)(iVar3 + 10) >> 4;
    *(byte *)(param_1 + 0x44) = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 4;
    sub_08029778(param_1,0xb);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (((*(uint *)(iVar3 + 0x90) & 0x10001) == 0) && ((*(byte *)(iVar3 + 0x94) & 2) == 0)) {
    *(byte *)(param_1 + 0x41) =
         *(byte *)(param_1 + 0x41) & 0xf |
         (&DAT_083a8013)
         [(uint)*(ushort *)(param_1 + 0x1c) * 0x14 +
          (uint)*(byte *)(param_1 + 9) * 4 + (&DAT_083a8000)[*(byte *)(param_1 + 9)]] << 4;
    uVar2 = (&DAT_083a8013)
            [(uint)*(ushort *)(param_1 + 0x1c) * 0x14 +
             (uint)*(byte *)(param_1 + 9) * 4 + (&DAT_083a8000)[*(byte *)(param_1 + 9)]];
  }
  else {
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
    uVar2 = 0xd;
  }
  *(undefined *)(param_1 + 0x1e) = uVar2;
  if (((*(uint *)(iVar3 + 0xc4) & 4) == 0) || (1 < *(byte *)(iVar3 + 0xc))) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  sub_080297C0(param_1);
  return in_lr;
}

