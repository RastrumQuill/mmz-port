// sub_0800DD7C at 0x0800DD7C (thumb)

undefined4 sub_0800DD7C(int param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined4 in_lr;
  
  sub_08005410();
  while( true ) {
    iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 4);
    *(int *)(param_1 + 0xc) = iVar2;
    if (iVar2 == param_1 + 0x14) break;
    if ((*(byte *)(iVar2 + 10) & 1) != 0) {
      iVar4 = iVar2 + 0x2c;
      if ((*(byte *)(iVar2 + 10) & 4) == 0) {
        if (*(char *)(iVar2 + 8) != '\x05') {
          *(byte *)(iVar2 + 0x41) = *(byte *)(iVar2 + 0x41) & 0xf | *(char *)(iVar2 + 0x1e) << 4;
        }
      }
      else {
        if (((*(uint *)(iVar2 + 0x90) & 0x10001) == 0) && ((*(byte *)(iVar2 + 0x94) & 2) == 0)) {
          bVar3 = *(char *)(iVar2 + 0x1e) << 4;
          bVar1 = *(byte *)(iVar2 + 0x41);
        }
        else {
          bVar1 = *(byte *)(iVar2 + 0x41);
          bVar3 = 0xd0;
        }
        *(byte *)(iVar2 + 0x41) = bVar1 & 0xf | bVar3;
        if (((DAT_02022870 == '\0') && ((*(ushort *)(iVar2 + 0x90) & 1) != 0)) &&
           (**(char **)(iVar2 + 0x7c) != '\0')) {
          DAT_0202285c = 1;
        }
      }
      if ((*(byte *)(iVar2 + 10) & 0x40) != 0) {
        *(byte *)(iVar2 + 0x3f) =
             *(byte *)(iVar2 + 0x3f) & 0xc1 | (byte)((DAT_0202287c & 0x1f) << 1);
        if (DAT_0202287c < 0x1f) {
          DAT_0202287c = DAT_0202287c + 1;
        }
        if ((*(byte *)(iVar2 + 0xb) & 1) == 0) {
          sub_08002C04(iVar4,*(undefined *)(iVar2 + 0x1f));
        }
        else if ((*(byte *)(iVar2 + 0xb) & 2) == 0) {
          sub_08002E50(iVar4,*(undefined *)(iVar2 + 0x1f));
        }
        else {
          sub_0800311C(iVar4,*(undefined *)(iVar2 + 0x1f));
        }
      }
      if ((*(byte *)(iVar2 + 10) & 8) == 0) {
        sub_08003378(param_2,iVar4);
      }
      else {
        sub_08003380(param_2,iVar4,((uint)*(byte *)(iVar2 + 0x41) << 0x1c) >> 0x1e);
      }
    }
  }
  return in_lr;
}

