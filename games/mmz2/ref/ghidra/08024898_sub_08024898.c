// sub_08024898 at 0x08024898 (thumb)

undefined8 sub_08024898(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x191);
  if ((bVar1 & 0x1e) == 0) {
    if ((*(uint *)(param_1 + 0x8c) & 0x400) != 0) {
      *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
      *(undefined *)(param_1 + 0xd) = 5;
      *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
      *(ushort *)(param_1 + 0xe) = bVar1 & 0x1e;
      *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
      *(undefined *)(param_1 + 0x176) = 0;
      *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
      *(undefined *)(param_1 + 0x177) = 0;
      *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
      *(undefined *)(param_1 + 0x178) = 0;
      *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
      *(undefined *)(param_1 + 0x179) = 0;
      uVar2 = 5;
      goto LAB_08024ac2;
    }
    *(undefined *)(param_1 + 0x4d) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
    if (bVar1 == 0) {
      if (((*(byte *)(param_1 + 0x196) & 0x20) == 0) ||
         ((*(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195)) & 1) != 0)) {
        uVar2 = 3;
      }
      else {
        if ((*(short *)(param_1 + 0xe) == 0x201) || (*(short *)(param_1 + 0xe) == 2)) {
          iVar3 = sub_080375A8(param_1,6,0);
          if (((*(byte *)(param_1 + 0x202) & 8) == 0) && (*(char *)(param_1 + 0x1fc) != '\x05')) {
            iVar4 = 0x200;
          }
          else {
            iVar4 = 0x280;
          }
          *(uint *)(param_1 + 0x58) =
               (*(int *)(param_1 + 0x58) -
               ((int)(((uint)*(ushort *)(iVar3 + 4) - (uint)*(ushort *)(iVar3 + 6)) + 0x100) / 2 +
               (uint)*(ushort *)(iVar3 + 4))) + iVar4;
        }
        *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
        *(undefined2 *)(param_1 + 0xe) = 0;
        *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
        *(undefined *)(param_1 + 0x176) = 0;
        *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
        *(undefined *)(param_1 + 0x177) = 0;
        *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
        *(undefined *)(param_1 + 0x178) = 0;
        *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
        *(undefined *)(param_1 + 0x179) = 0;
        uVar2 = 1;
      }
      goto LAB_08024ac2;
    }
    *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 0;
  }
  else {
    *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 0;
  }
  *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
  *(undefined *)(param_1 + 0x176) = 0;
  *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
  *(undefined *)(param_1 + 0x177) = 0;
  *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
  *(undefined *)(param_1 + 0x178) = 0;
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 0;
  uVar2 = 7;
LAB_08024ac2:
  return CONCAT44(in_lr,uVar2);
}

