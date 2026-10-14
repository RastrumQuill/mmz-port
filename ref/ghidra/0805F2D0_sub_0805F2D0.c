// sub_0805F2D0 at 0x0805F2D0 (thumb)

undefined4 sub_0805F2D0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x10) == '\x04') && ((DAT_02022ae0 & 0x10) != 0)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  else {
    puVar3 = (undefined4 *)(param_1 + 0x90);
    if ((*(ushort *)puVar3 & 1) != 0) {
      *(undefined2 *)(param_1 + 0x8c) = 0x14;
    }
    if ((*(int *)(param_1 + 0x20) != 0) && (1 < *(byte *)(*(int *)(param_1 + 0x20) + 0xc))) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *puVar3 = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
    cVar1 = *(char *)(param_1 + 0xf);
    if (cVar1 == '\0') {
      iVar2 = sub_08048BE8(param_1);
      if (iVar2 != 0) {
        *(undefined *)(param_1 + 0xf) = 1;
      }
      cVar1 = *(char *)(param_1 + 0xf);
      if (cVar1 == '\0') {
        if (*(byte *)(param_1 + 0x10) < 4) {
          piVar4 = (int *)(param_1 + 0xbc);
          if (*piVar4 == 0) {
            if ((*(ushort *)puVar3 & 1) != 0) {
              iVar2 = sub_08015A64(0,param_1,&DAT_082b041c);
              *piVar4 = iVar2;
            }
          }
          else {
            iVar2 = sub_08015D94();
            if (iVar2 != 0) {
              *piVar4 = 0;
            }
          }
        }
        sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b03dc + (uint)*(byte *)(param_1 + 0xd) * 4));
        sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b03f0 + (uint)*(byte *)(param_1 + 0xd) * 4));
        return in_lr;
      }
    }
    if (cVar1 == '\x01') {
      sub_08003458(param_1 + 0x6c);
      *(undefined *)(param_1 + 0x46) =
           *(undefined *)
            (*(char *)(param_1 + 0x71) * 4 +
            *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
      *(undefined *)(param_1 + 0xf) = 2;
    }
    iVar2 = sub_08048BE8(param_1);
    if (iVar2 == 0) {
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}

