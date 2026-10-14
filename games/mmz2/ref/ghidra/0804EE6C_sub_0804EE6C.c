// sub_0804EE6C at 0x0804EE6C (thumb)

undefined4 sub_0804EE6C(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833a138 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_0833c093)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08012580(param_1);
  if (*(char *)(param_1 + 0x10) != '\x02') {
    sub_080127D0(param_1);
    sub_080127E4(param_1,0xa400);
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  if (*(char *)(param_1 + 0x10) != '\x01') {
    sub_0803F9E4(param_1,&DAT_0833b87c,0x60);
    *(undefined4 *)(param_1 + 0x98) = 0x804f12d;
    if (*(char *)(param_1 + 0x10) == '\0') {
      uVar1 = sub_0809F5DC(param_1);
      *(undefined4 *)(param_1 + 200) = uVar1;
      sub_08002638(&DAT_08433124,(DAT_0202e5fa - 0x210) * 0x20 + 0x10000);
      sub_08002AEC(&DAT_08433130,(DAT_0202e3fa - 4) * 0x20 + 0x200);
      sub_08002638(&DAT_08433138,(DAT_0202e5fc - 0x340) * 0x20 + 0x10000);
      sub_08002AEC(&DAT_08433144,(DAT_0202e3fc - 4) * 0x20 + 0x200);
      sub_08002638(&DAT_0843337c,(DAT_0202e636 - 0x3d0) * 0x20 + 0x10000);
      sub_08002AEC(&DAT_08433388,(DAT_0202e436 - 5) * 0x20 + 0x200);
    }
  }
  *(undefined *)(param_1 + 0xc5) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  uVar1 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined *)(param_1 + 0xcc) = 0;
  *(undefined *)(param_1 + 0xcd) = 0;
  *(undefined2 *)(param_1 + 0xd0) = 0xffff;
  sub_0804EFFC(param_1);
  return in_lr;
}

