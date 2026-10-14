// sub_081076C4 at 0x081076C4 (thumb)

undefined4 sub_081076C4(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    iVar5 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
    iVar4 = *(int *)(param_1 + 0x2c);
    if ((*(uint *)(param_1 + 0x14) & 0x20000) == 0) {
      if (*(char *)(iVar5 + 8) == '\x01') {
        iVar3 = *(int *)(iVar4 + 0x2c);
        *(undefined4 *)(iVar3 + 0xe20) = 1;
        *(undefined4 *)(iVar3 + 0xe34) = 0xff;
        if (*(char *)(iVar5 + 9) == "89:;<"[*(byte *)(iVar4 + 0x11)]) {
          *(undefined4 *)(iVar4 + 0xc) = 2;
          *(undefined4 *)(iVar4 + 0x14) =
               *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(iVar4 + 9) * 4) + 8);
          *(undefined4 *)(iVar4 + 0x8c) = 0;
          *(undefined4 *)(iVar4 + 0x90) = 0;
          *(undefined *)(iVar4 + 0x94) = 0;
          *(byte *)(iVar4 + 10) = *(byte *)(iVar4 + 10) & 0xfb;
          *(undefined *)(iVar4 + 0xe) = 0;
          *(undefined *)(iVar4 + 0xb7) = 0;
          if (*(char *)(iVar4 + 0x10) == '\0') {
            iVar5 = *(int *)(iVar4 + 0x2c);
            bVar1 = *(byte *)(iVar4 + 0xb5);
            *(uint *)(iVar5 + 0xe18) = (uint)bVar1;
            if (bVar1 == 0) {
              *(undefined4 *)(iVar5 + 0xe18) = 1;
            }
            *(undefined4 *)(iVar5 + 0xe10) = 1;
            *(undefined4 *)(iVar5 + 0xe38) = 1;
          }
          else {
            iVar5 = *(int *)(iVar4 + 0x2c);
            bVar1 = *(byte *)(iVar4 + 0xb5);
            *(uint *)(iVar5 + 0xe1c) = (uint)bVar1;
            if (bVar1 == 0) {
              *(undefined4 *)(iVar5 + 0xe1c) = 1;
            }
            *(undefined4 *)(iVar5 + 0xe14) = 1;
            *(undefined4 *)(iVar5 + 0xe3c) = 1;
          }
          *(undefined *)(iVar4 + 0xb7) = 1;
          *(undefined4 *)(*(int *)(iVar4 + 0x2c) + 0xe24) = 1;
        }
      }
    }
    else if ((DAT_0202dbf0 != 0) &&
            (cVar2 = sub_0803A584(DAT_0202dbf0,6,(&DAT_08868f13)[*(byte *)(iVar4 + 0x11)]),
            cVar2 != '\0')) {
      *(undefined *)(iVar4 + 0xb4) = 1;
      *(undefined4 *)(iVar4 + 0xc) = 2;
      *(undefined4 *)(iVar4 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(iVar4 + 9) * 4) + 8);
      *(undefined *)(iVar4 + 0xe) = 0;
      *(undefined4 *)(iVar4 + 0x8c) = 0;
      *(undefined4 *)(iVar4 + 0x90) = 0;
      *(undefined *)(iVar4 + 0x94) = 0;
      *(byte *)(iVar4 + 10) = *(byte *)(iVar4 + 10) & 0xfb;
    }
  }
  return in_lr;
}

