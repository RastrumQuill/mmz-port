// sub_080DC41C at 0x080DC41C (thumb)

undefined4 sub_080DC41C(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_08012580(param_1);
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == '\0') {
    uVar4 = 0;
    if (DAT_02036c36 != 0) {
      do {
        uVar2 = uVar4 * 0x10000 + 0x10000;
        uVar4 = uVar2 >> 0x10;
        iVar3 = (int)uVar2 >> 0x10;
        if (3 < iVar3) break;
      } while ((&DAT_0834be20)[iVar3] != (uint)DAT_02036c36);
    }
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') {
        uVar4 = 0;
        if (DAT_02036c39 != 0) {
          do {
            uVar2 = uVar4 * 0x10000 + 0x10000;
            uVar4 = uVar2 >> 0x10;
            iVar3 = (int)uVar2 >> 0x10;
            if (3 < iVar3) break;
          } while ((&DAT_0834be30)[iVar3] != (uint)DAT_02036c39);
        }
        sub_080127E4(param_1,*(undefined2 *)((int)&DAT_0834be14 + ((int)(uVar4 << 0x10) >> 0xf)));
      }
      goto LAB_080dc508;
    }
    uVar4 = 0;
    if (DAT_02036c37 != 0) {
      do {
        uVar2 = uVar4 * 0x10000 + 0x10000;
        uVar4 = uVar2 >> 0x10;
        iVar3 = (int)uVar2 >> 0x10;
        if (3 < iVar3) break;
      } while ((&DAT_0834be20)[iVar3] != (uint)DAT_02036c37);
    }
  }
  sub_080127E4(param_1,*(undefined2 *)((int)&DAT_0834be0c + ((int)(uVar4 << 0x10) >> 0xf)));
LAB_080dc508:
  *(undefined4 *)(param_1 + 0x54) = 0x4800;
  *(uint *)(param_1 + 0x58) = (uint)*(byte *)(param_1 + 0x10) * 0x1800 + 0x5800;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834b8b4)[*(byte *)(param_1 + 9)] + 4);
  sub_080DC54C(param_1);
  return in_lr;
}

