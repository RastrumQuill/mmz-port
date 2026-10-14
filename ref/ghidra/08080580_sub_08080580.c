// sub_08080580 at 0x08080580 (thumb)

undefined4 sub_08080580(int param_1)

{
  char cVar1;
  ushort uVar2;
  byte bVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x20);
  uVar2 = *(ushort *)(uint *)(param_1 + 0x90);
  if ((uVar2 & 0x200) == 0) {
    if ((uVar2 & 4) == 0) {
      if ((uVar2 & 0x40) == 0) {
        if (((*(uint *)(param_1 + 0x90) & 0x10001) == 0) && ((*(byte *)(param_1 + 0x94) & 2) == 0))
        {
          cVar1 = (&DAT_02022fe0)[*(byte *)(param_1 + 9)];
          *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar1 << 4;
          *(char *)(param_1 + 0x1e) = cVar1;
        }
        else {
          *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
          *(undefined *)(param_1 + 0x1e) = 0xd;
        }
        if (*(char *)(param_1 + 0xe) == '\0') {
          sub_08076590(param_1);
          sub_080033F0(param_1 + 0x6c,0);
          bVar3 = *(byte *)(iVar4 + 10) >> 4;
          *(byte *)(param_1 + 0x44) = bVar3 & 1;
          if ((bVar3 & 1) == 0) {
            bVar3 = *(byte *)(param_1 + 10) & 0xef;
          }
          else {
            bVar3 = *(byte *)(param_1 + 10) | 0x10;
          }
          *(byte *)(param_1 + 10) = bVar3;
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
          sub_080055FC(param_1 + 0x74,&DAT_082b2790,param_1 + 0x4c,1);
          *(int *)(param_1 + 0xb4) = param_1;
          *(undefined4 *)(param_1 + 0xb0) = 0;
          *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
        }
        else if (*(char *)(param_1 + 0xe) != '\x01') {
          return in_lr;
        }
        iVar4 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
        *(int *)(param_1 + 0x4c) = iVar4;
        iVar4 = sub_08007EE0(iVar4 + 0x1000,*(undefined4 *)(param_1 + 0x50));
        if ((iVar4 < 0) ||
           (iVar4 = sub_08008120(*(int *)(param_1 + 0x4c) + -0x1000,*(undefined4 *)(param_1 + 0x50))
           , 0 < iVar4)) {
          *(undefined4 *)(param_1 + 0xc) = 2;
          *(undefined4 *)(param_1 + 0x14) =
               *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
        }
        iVar4 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
        *(int *)(param_1 + 0x50) = iVar4;
        if ((0 < *(int *)(param_1 + 0x58)) &&
           (iVar4 = sub_08007B30(*(undefined4 *)(param_1 + 0x4c),iVar4 + 0x1000), iVar4 < 0)) {
          *(undefined4 *)(param_1 + 0xc) = 2;
          *(undefined4 *)(param_1 + 0x14) =
               *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
        }
        iVar4 = *(int *)(param_1 + 0x58) + 0x40;
        *(int *)(param_1 + 0x58) = iVar4;
        if (0x700 < iVar4) {
          *(undefined4 *)(param_1 + 0x58) = 0x700;
        }
        sub_08003458(param_1 + 0x6c);
        *(undefined *)(param_1 + 0x46) =
             *(undefined *)
              (*(char *)(param_1 + 0x71) * 4 +
              *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
        return in_lr;
      }
      iVar4 = (uint)*(byte *)(param_1 + 9) << 2;
    }
    else {
      iVar4 = (uint)*(byte *)(param_1 + 9) << 2;
    }
  }
  else {
    iVar4 = (uint)*(byte *)(param_1 + 9) << 2;
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*(int *)((int)&DAT_082b17b0 + iVar4) + 8);
  return in_lr;
}

