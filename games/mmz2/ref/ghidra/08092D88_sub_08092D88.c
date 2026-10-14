// sub_08092D88 at 0x08092D88 (thumb)

undefined4 sub_08092D88(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    cVar1 = *(char *)(param_1 + 0xf);
    if (cVar1 == '\0') {
      iVar2 = sub_08065A24(param_1);
      if (iVar2 != 0) {
        *(undefined *)(param_1 + 0xf) = 1;
      }
      cVar1 = *(char *)(param_1 + 0xf);
      if (cVar1 == '\0') {
        piVar4 = (int *)(param_1 + 0xb4);
        if (*piVar4 == 0) {
          sub_080EF118(param_1,*(undefined4 *)(&DAT_083428d4 + (uint)*(byte *)(param_1 + 0xd) * 4));
          sub_080EF118(param_1,*(undefined4 *)(&DAT_083428f8 + (uint)*(byte *)(param_1 + 0xd) * 4));
          if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
            iVar2 = sub_0801E11C(0,param_1,&DAT_08342920);
            *piVar4 = iVar2;
            if (iVar2 != 0) {
              sub_08006E08(param_1 + 0x74,&DAT_083428a4);
              *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x60);
              *(undefined4 *)(param_1 + 0x60) = 0;
            }
          }
        }
        else {
          iVar2 = sub_0801E4D8();
          if (iVar2 == 0) {
            iVar2 = sub_08008DE8(*(int *)(param_1 + 0x54) + -0x800,*(int *)(param_1 + 0x58) + 0x800)
            ;
            if ((-1 < iVar2) &&
               (iVar2 = sub_08008DE8(*(int *)(param_1 + 0x54) + 0x800,
                                     *(int *)(param_1 + 0x58) + 0x800), -1 < iVar2)) {
              iVar2 = *(int *)(param_1 + 0x60) + 0x40;
              *(int *)(param_1 + 0x60) = iVar2;
              if (0x700 < iVar2) {
                *(undefined4 *)(param_1 + 0x60) = 0x700;
              }
              iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
              *(int *)(param_1 + 0x58) = iVar2;
              iVar2 = sub_08008DE8(*(int *)(param_1 + 0x54) + -0x800,iVar2 + 0x800);
              if (iVar2 < 0) {
                *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
              }
              iVar2 = sub_08008DE8(*(int *)(param_1 + 0x54) + 0x800,*(int *)(param_1 + 0x58) + 0x800
                                  );
              if (iVar2 < 0) {
                *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
              }
            }
          }
          else {
            sub_08006E08(param_1 + 0x74,&DAT_08342874);
            *piVar4 = 0;
            *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x68);
          }
        }
        uVar3 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
        if (uVar3 < 0x8001) {
          return in_lr;
        }
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
        *(undefined4 *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        *(undefined4 *)(param_1 + 0xc) = 3;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
        return in_lr;
      }
    }
    if (cVar1 == '\x01') {
      sub_080128D4(param_1);
      *(undefined *)(param_1 + 0xf) = 2;
      *(undefined4 *)(param_1 + 0xb4) = 0;
      sub_08006E08(param_1 + 0x74,&DAT_08342874);
    }
    iVar2 = sub_08065A24(param_1);
    if (iVar2 == 0) {
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = 0;
    sub_08092F60(param_1);
  }
  return in_lr;
}

