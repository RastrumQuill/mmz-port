// sub_0807096C at 0x0807096C (thumb)

undefined4 sub_0807096C(int param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x20);
  if ((*(char *)(param_1 + 0x10) == '\x02') && ((DAT_02022adc & 1) != 0)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4);
    *(undefined4 *)(param_1 + 0xc) = 3;
  }
  else {
    if (*(char *)(param_1 + 0x10) == '\0') {
      uVar3 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
      if (0x8000 < uVar3) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        piVar2 = (int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4);
        *(undefined4 *)(param_1 + 0xc) = 3;
        goto LAB_08070a5c;
      }
      cVar1 = sub_08070718(param_1);
      if (cVar1 != '\0') goto LAB_08070b4c;
    }
    if (*(char *)(param_1 + 0x10) != '\x03') {
      if ((*(ushort *)(param_1 + 0x90) & 0x40) != 0) {
LAB_08070b4c:
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
        sub_08070C10(param_1);
        return in_lr;
      }
LAB_08070b6c:
      if (*(char *)(param_1 + 0xf) == '\0') {
        iVar7 = sub_08048BE8(param_1);
        if (iVar7 != 0) {
          *(undefined *)(param_1 + 0xf) = 1;
        }
        if (*(char *)(param_1 + 0xf) == '\0') {
          sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b1270 + (uint)*(byte *)(param_1 + 0xd) * 4));
          sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b12a0 + (uint)*(byte *)(param_1 + 0xd) * 4));
          return in_lr;
        }
      }
      if (*(char *)(param_1 + 0x10) == '\0') {
        sub_08070660(param_1,0,0x100);
      }
      if (*(char *)(param_1 + 0xf) == '\x01') {
        sub_08003458(param_1 + 0x6c);
        *(undefined *)(param_1 + 0x46) =
             *(undefined *)
              (*(char *)(param_1 + 0x71) * 4 +
              *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
        *(undefined *)(param_1 + 0xf) = 2;
      }
      iVar7 = sub_08048BE8(param_1);
      if (iVar7 != 0) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xf) = 0;
      return in_lr;
    }
    if (*(byte *)(iVar7 + 0xc) != 4) {
      if (*(byte *)(iVar7 + 0xc) < 2) {
        if ((*(ushort *)(undefined4 *)(param_1 + 0x90) & 0x40) != 0) {
          sub_0807076C(iVar7);
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
          *(undefined4 *)(param_1 + 0x90) = 0;
          *(undefined *)(param_1 + 0x94) = 0;
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
          *(undefined4 *)(param_1 + 0xc) = 3;
          *(undefined4 *)(param_1 + 0x14) =
               *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
          uVar6 = *(undefined4 *)(iVar7 + 0x4c);
          uVar5 = *(undefined4 *)(iVar7 + 0x50);
          uVar3 = sub_08070660(iVar7,0,1);
          uVar4 = sub_08070660(iVar7,0,0xffffffff);
          *(undefined4 *)(iVar7 + 0x4c) = uVar6;
          *(undefined4 *)(iVar7 + 0x50) = uVar5;
          if (((uVar3 & 0xff | uVar4 & 0xff) & 1) != 0) {
            *(undefined4 *)(iVar7 + 0xc) = 2;
            *(undefined4 *)(iVar7 + 0x14) =
                 *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(iVar7 + 9) * 4) + 8);
            sub_08070C10(iVar7);
            return in_lr;
          }
          sub_080033F0(iVar7 + 0x6c,7);
          sub_08003458(iVar7 + 0x6c);
          *(undefined *)(iVar7 + 0x46) =
               *(undefined *)
                (*(char *)(iVar7 + 0x71) * 4 +
                *(int *)((uint)*(byte *)(iVar7 + 0x70) * 4 + *(int *)(iVar7 + 0x6c)));
          *(undefined *)(iVar7 + 0xd) = 8;
          *(undefined *)(iVar7 + 0xe) = 0;
          return in_lr;
        }
        goto LAB_08070b6c;
      }
      sub_0807076C(iVar7);
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4);
    *(undefined4 *)(param_1 + 0xc) = 3;
  }
LAB_08070a5c:
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
  return in_lr;
}

