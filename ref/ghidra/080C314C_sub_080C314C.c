// sub_080C314C at 0x080C314C (thumb)

undefined8 sub_080C314C(int param_1,char param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 in_lr;
  
  if (0 < param_2) {
    uVar5 = (uint)*(byte *)(param_1 + 4);
    if ((DAT_02004ca8 & 1) != 0) {
      *(undefined *)(param_1 + 1) = 1;
      *(undefined *)(param_1 + 2) = 0;
      *(undefined *)(param_1 + 5) = 0;
      cVar2 = sub_080C324C(param_1,(int)param_2);
      iVar3 = (int)cVar2;
      goto LAB_080c323e;
    }
    if ((DAT_02004ca8 & 0xc0) == 0) {
      uVar6 = uVar5;
      if ((DAT_02004ca8 & 0x30) != 0) {
        if ((DAT_02004ca8 & 0x20) == 0) {
          puVar4 = &DAT_082cbfa3;
        }
        else {
          puVar4 = &DAT_082cbfa2;
        }
        goto LAB_080c31da;
      }
    }
    else {
      if ((DAT_02004ca8 & 0x40) == 0) {
        puVar4 = &DAT_082cbfa1;
LAB_080c31da:
        cVar2 = puVar4[uVar5 * 4];
      }
      else {
        cVar2 = (&DAT_082cbfa0)[uVar5 * 4];
      }
      uVar6 = (int)cVar2;
      if (cVar2 < 0) {
        uVar6 = uVar5;
      }
    }
    uVar1 = uVar6;
    uVar7 = uVar5;
    if (uVar6 == uVar5) {
LAB_080c3234:
      sub_080C3F44(uVar6 & 0xff);
    }
    else {
      do {
        uVar6 = uVar1;
        cVar2 = sub_080C8A98(param_1,*(undefined4 *)(&DAT_082cbf84 + uVar6 * 4));
        if (cVar2 != '\0') {
          if (uVar6 != uVar5) {
            sub_08001EAC(0x29);
          }
          *(char *)(param_1 + 4) = (char)uVar6;
          goto LAB_080c3234;
        }
        iVar3 = uVar7 + uVar6 * 7;
        uVar1 = (int)(char)(&DAT_082cbfbc)[iVar3];
        uVar7 = uVar6;
      } while (-1 < (char)(&DAT_082cbfbc)[iVar3]);
    }
  }
  iVar3 = 0;
LAB_080c323e:
  return CONCAT44(in_lr,iVar3);
}

