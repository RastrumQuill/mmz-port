// sub_080E8848 at 0x080E8848 (thumb)

undefined8 sub_080E8848(int param_1,char param_2)

{
  char cVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  if (0 < param_2) {
    uVar5 = (uint)*(byte *)(param_1 + 4);
    if ((DAT_02000d14 & 1) != 0) {
      *(undefined *)(param_1 + 1) = 1;
      *(undefined *)(param_1 + 2) = 0;
      *(undefined *)(param_1 + 5) = 0;
      cVar1 = sub_080E8980(param_1,(int)param_2);
      iVar4 = (int)cVar1;
      goto LAB_080e896c;
    }
    if ((DAT_02000d14 & 0xc0) == 0) {
      uVar3 = uVar5;
      if ((DAT_02000d14 & 0x30) != 0) {
        if ((DAT_02000d14 & 0x20) == 0) {
          puVar2 = &DAT_0835e587;
        }
        else {
          puVar2 = &DAT_0835e586;
        }
        goto LAB_080e88de;
      }
    }
    else {
      if ((DAT_02000d14 & 0x40) == 0) {
        puVar2 = &DAT_0835e585;
LAB_080e88de:
        cVar1 = puVar2[uVar5 * 4];
      }
      else {
        cVar1 = (&DAT_0835e584)[uVar5 * 4];
      }
      uVar3 = (int)cVar1;
      if (cVar1 < 0) {
        uVar3 = uVar5;
      }
    }
    if (uVar3 == uVar5) {
LAB_080e8962:
      sub_080E9CA8(uVar3 & 0xff);
    }
    else {
      do {
        cVar1 = sub_080EF118(param_1,*(undefined4 *)(&DAT_0835e568 + uVar3 * 4));
        if (cVar1 != '\0') {
          if (uVar3 != uVar5) {
            sub_080032EC(1);
          }
          *(char *)(param_1 + 4) = (char)uVar3;
          goto LAB_080e8962;
        }
        if ((DAT_02000d14 & 0xc0) == 0) {
          if ((DAT_02000d14 & 0x20) == 0) {
            puVar2 = &DAT_0835e587;
          }
          else {
            puVar2 = &DAT_0835e586;
          }
        }
        else {
          puVar2 = &DAT_0835e585;
          if ((DAT_02000d14 & 0x40) != 0) {
            puVar2 = &DAT_0835e584;
          }
        }
        uVar3 = (uint)(char)puVar2[uVar3 * 4];
      } while (-1 < (int)uVar3);
    }
  }
  iVar4 = 0;
LAB_080e896c:
  return CONCAT44(in_lr,iVar4);
}

