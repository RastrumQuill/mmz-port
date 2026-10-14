// sub_080CA7D8 at 0x080CA7D8 (thumb)

/* WARNING: Removing unreachable block (ram,0x080ca85a) */
/* WARNING: Removing unreachable block (ram,0x080ca872) */

undefined4 sub_080CA7D8(int param_1)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  undefined4 in_lr;
  int aiStack_4c [16];
  
  sub_08128B5C(aiStack_4c,&DAT_08129ac8,0x40);
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  bVar1 = *(byte *)(param_1 + 0x10);
  if ((bVar1 & 1) == 0) {
    if ((bVar1 == 0) || (bVar1 == 4)) {
      sub_0801CF00(param_1,0x8a0f);
      *(undefined4 *)(param_1 + 0x60) = 0xfffffe00;
      *(undefined4 *)(param_1 + 0x68) = 0xfffffff0;
    }
    else {
      sub_0801CF00(param_1,0x8a11);
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffe00;
      *(undefined4 *)(param_1 + 100) = 0xfffffff0;
    }
  }
  else {
    sub_0801CF00(param_1,0x8a10);
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffe96;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffe96;
    *(undefined4 *)(param_1 + 100) = 0xfffffff5;
    *(undefined4 *)(param_1 + 0x68) = 0xfffffff5;
  }
  cVar3 = *(char *)(param_1 + 0x10);
  if ((byte)(cVar3 - 3U) < 3) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
    *(undefined *)(param_1 + 0x4d) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | 0x20;
    iVar2 = *(int *)(param_1 + 0x60) * -0x100;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar2 >> 8;
    iVar2 = *(int *)(param_1 + 0x68) * -0x100;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x68) = iVar2 >> 8;
    cVar3 = *(char *)(param_1 + 0x10);
  }
  if ((byte)(cVar3 - 5U) < 3) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    iVar2 = *(int *)(param_1 + 0x5c) * -0x100;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar2 >> 8;
    iVar2 = *(int *)(param_1 + 100) * -0x100;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 100) = iVar2 >> 8;
  }
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) + aiStack_4c[(uint)*(byte *)(param_1 + 0x10) * 2] * 0x100;
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) + aiStack_4c[(uint)*(byte *)(param_1 + 0x10) * 2 + 1] * 0x100;
  *(undefined4 *)(param_1 + 0xb4) = 0x200;
  *(undefined *)(param_1 + 0x12) = 0xc4;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_08862edc,param_1 + 0x54,0xff);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x80caa7d;
  sub_080CA9DC(param_1);
  return in_lr;
}

