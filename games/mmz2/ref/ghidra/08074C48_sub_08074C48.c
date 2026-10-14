// sub_08074C48 at 0x08074C48 (thumb)

undefined4 sub_08074C48(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(byte *)(iVar3 + 0xc) < 2) {
    sub_080128D4(param_1);
    *(int *)(param_1 + 0x54) =
         *(int *)(iVar3 + 0x54) +
         (short)(&DAT_080ef450)[(*(byte *)(iVar3 + 0x13) + 0x40 & 0xff) + 0x40 & 0xff] * 8;
    *(int *)(param_1 + 0x58) =
         *(int *)(iVar3 + 0x58) + (short)(&DAT_080ef450)[*(byte *)(iVar3 + 0x13) + 0x40 & 0xff] * 8;
    if (*(char *)(iVar3 + 0xd) == '\x04') {
      *(undefined *)(param_1 + 0xd) = 2;
    }
    bVar1 = *(byte *)(param_1 + 0xd);
    if (bVar1 == 1) {
      *(undefined2 *)(param_1 + 0x50) = 0x100;
      *(undefined2 *)(param_1 + 0x52) = 0x100;
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 == -1) {
        *(undefined4 *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        *(undefined *)(param_1 + 0x12) = 8;
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        *(ushort *)(param_1 + 0x50) = (ushort)*(byte *)(param_1 + 0x12) * -0x10 + 0x100;
        *(ushort *)(param_1 + 0x52) = (ushort)*(byte *)(param_1 + 0x12) * -0x10 + 0x100;
        cVar2 = *(char *)(param_1 + 0x12) + -1;
        *(char *)(param_1 + 0x12) = cVar2;
        if (cVar2 == -1) {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
          sub_08006DE4(param_1 + 0x74,&DAT_0833f964,param_1 + 0x54,1);
          *(int *)(param_1 + 0xa0) = param_1;
          *(undefined4 *)(param_1 + 0x98) = 0;
          *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
          *(undefined *)(param_1 + 0x12) = 0x10;
        }
      }
    }
    else if (bVar1 == 2) {
      *(ushort *)(param_1 + 0x50) = (ushort)*(byte *)(param_1 + 0x12) * 0x10 + 0x80;
      *(ushort *)(param_1 + 0x52) = (ushort)*(byte *)(param_1 + 0x12) * 0x10 + 0x80;
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 == -1) {
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
        sub_08074A90(param_1);
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08074A90(param_1);
  }
  return in_lr;
}

