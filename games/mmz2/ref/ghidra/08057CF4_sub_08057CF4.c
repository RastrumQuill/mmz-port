// sub_08057CF4 at 0x08057CF4 (thumb)

undefined4 sub_08057CF4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833a138 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_0833cb06)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08012580(param_1);
  sub_080127D0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_0803F9E4(param_1,&DAT_0833c7f8,0x40);
  *(undefined4 *)(param_1 + 0x98) = 0x8057f89;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined2 *)(param_1 + 0xb8) = 0;
  *(undefined *)(param_1 + 0xba) = 0xff;
  *(undefined *)(param_1 + 0xbb) = 0;
  *(undefined *)(param_1 + 0xc4) = 0;
  *(undefined2 *)(param_1 + 0xd6) = 0x708;
  if (*(char *)(param_1 + 0x10) == '\x02') {
    *(undefined *)(param_1 + 0xc4) = 3;
  }
  else {
    sub_08002638(&DAT_08433188,(DAT_0202e604 - 0x380) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_08433194,(DAT_0202e404 - 5) * 0x20 + 0x200);
    sub_08002638(&DAT_0843319c,(DAT_0202e606 - 0x210) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_084331a8,(DAT_0202e406 - 6) * 0x20 + 0x200);
  }
  uVar1 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0xd0) = uVar1;
  if (*(char *)(param_1 + 0x10) != '\x04') {
    *(undefined4 *)(param_1 + 0x58) = uVar1;
  }
  iVar2 = sub_08009774(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar3 = sub_08009684(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0xc0) = iVar2 + iVar3 >> 1;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  sub_08057E68(param_1);
  return in_lr;
}

