// sub_080216E4 at 0x080216E4 (thumb)

longlong sub_080216E4(ushort *param_1)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  uint in_lr;
  
  iVar6 = *(int *)(param_1 + 0x10);
  sub_08021B34();
  cVar1 = *(char *)(param_1 + 0xbe);
  if (cVar1 == '\0') {
    uVar2 = DAT_020301a8 | 1;
    if (DAT_020301a2 == '\0') {
      DAT_020301a8 = uVar2;
      sub_08021D7C(&DAT_020301b0,&DAT_08358788);
    }
    else if (DAT_020301a2 == '\x01') {
      DAT_020301a8 = uVar2;
      sub_08021D7C(&DAT_020301b0,&DAT_083587d0);
    }
    else if (DAT_020301a2 == '\x02') {
      DAT_020301a8 = uVar2;
      sub_08021D7C(&DAT_020301b0,&DAT_08358828);
    }
    else if (DAT_020301a2 == '\x03') {
      DAT_020301a8 = uVar2;
      sub_08021D7C(&DAT_020301b0,*(undefined4 *)(*(int *)(&DAT_08349844 + (uint)*param_1 * 4) + 0xc)
                  );
    }
    else {
      if (DAT_020301a2 == '\x04') {
        DAT_020301a8 = uVar2;
        sub_08021D7C(&DAT_020301b0,
                     *(undefined4 *)(*(int *)(&DAT_08349844 + (uint)*param_1 * 4) + 0x1c));
        DAT_020301a8 = DAT_020301a8 | 0x40;
        cVar1 = '\x01';
        goto LAB_08021b0e;
      }
      if (DAT_020301a2 == '\x06') {
        DAT_020301a8 = uVar2;
        sub_08021D7C(&DAT_020301b0,
                     *(undefined4 *)(*(int *)(&DAT_08349844 + (uint)*param_1 * 4) + 0x18));
      }
      else if (DAT_020301a2 == '\a') {
        DAT_020301a8 = uVar2;
        sub_08021D7C(&DAT_020301b0,
                     *(undefined4 *)(*(int *)(&DAT_08349844 + (uint)*param_1 * 4) + 0x1c));
      }
      else {
        if (DAT_020301a2 != '\b') {
          if (DAT_020301a2 == '\t') {
            DAT_020301a8 = uVar2;
            sub_08021D7C(&DAT_020301b0,
                         *(undefined4 *)(*(int *)(&DAT_08349844 + (uint)*param_1 * 4) + 0x24));
            if ((DAT_02030106 & 0x14) == 4) {
              cVar1 = '\a';
              goto LAB_08021b0e;
            }
          }
          else {
            if (DAT_020301a2 == '\n') {
              DAT_020301a8 = uVar2;
              sub_08021D7C(&DAT_020301b0,
                           *(undefined4 *)(*(int *)(&DAT_08349844 + (uint)*param_1 * 4) + 0x28));
              DAT_020301a8 = DAT_020301a8 | 0x40;
              sub_0801A4CC(0xb);
              *(undefined *)(param_1 + 0xbe) = 3;
              goto LAB_08021b10;
            }
            if (DAT_020301a2 == '\v') {
              DAT_020301a8 = uVar2;
              sub_08021D7C(&DAT_020301b0,
                           *(undefined4 *)(*(int *)(&DAT_08349844 + (uint)*param_1 * 4) + 0x2c));
              DAT_020301a8 = DAT_020301a8 & 0xfffe | 0x40;
              sub_0801A4CC(0xc);
            }
            else {
              if (DAT_020301a2 != '\f') {
                if (DAT_020301a2 == '\r') {
                  uVar3 = *(undefined4 *)(*(int *)(&DAT_08349844 + (uint)*param_1 * 4) + 0x30);
                }
                else {
                  if (DAT_020301a2 != '\x0e') {
                    if (DAT_020301a2 == '\x0f') {
                      DAT_020301a8 = uVar2;
                      sub_08021D7C(&DAT_020301b0,
                                   *(undefined4 *)
                                    (*(int *)(&DAT_08349844 + (uint)*param_1 * 4) + 0x1c));
                      DAT_020301a8 = DAT_020301a8 | 0x40;
                      *(undefined *)(param_1 + 0xbe) = 5;
                      goto LAB_08021b10;
                    }
                    if (DAT_020301a2 == '\x10') {
                      DAT_020301a8 = uVar2;
                      sub_08021D7C(&DAT_020301b0,
                                   *(undefined4 *)
                                    (*(int *)(&DAT_08349844 + (uint)*param_1 * 4) + 0x1c));
                      DAT_020301a8 = DAT_020301a8 | 0x40;
                      *(undefined *)(param_1 + 0xbe) = 6;
                      goto LAB_08021b10;
                    }
                    if (DAT_020301a2 == '\x11') {
                      DAT_020301a8 = uVar2;
                      sub_08021D7C(&DAT_020301b0,&DAT_08358828);
                      *(undefined *)(param_1 + 0xbe) = 7;
                      goto LAB_08021b10;
                    }
                    if (DAT_020301a2 == '\x12') {
                      puVar4 = &DAT_08359bb8;
                    }
                    else {
                      if (DAT_020301a2 == '\x13') {
                        DAT_020301a8 = DAT_020301a8 & 0xfffe;
                        goto LAB_080219d0;
                      }
                      DAT_020301a8 = uVar2;
                      if (DAT_020301a2 != '\x14') goto LAB_08021b10;
                      puVar4 = &DAT_08359860;
                    }
                    DAT_020301a8 = uVar2;
                    sub_08021D7C(&DAT_020301b0,puVar4);
                    goto LAB_080219d0;
                  }
                  uVar3 = *(undefined4 *)(*(int *)(&DAT_08349844 + (uint)*param_1 * 4) + 0x34);
                }
                DAT_020301a8 = uVar2;
                sub_08021D7C(&DAT_020301b0,uVar3);
                DAT_020301a8 = DAT_020301a8 | 0x40;
                *(undefined *)(param_1 + 0xbe) = 4;
                goto LAB_08021b10;
              }
              DAT_020301a8 = DAT_020301a8 & 0xfffe;
            }
          }
LAB_080219d0:
          *(undefined *)(param_1 + 0xbe) = 0xff;
          goto LAB_08021b10;
        }
        DAT_020301a8 = uVar2;
        sub_08021D7C(&DAT_020301b0,
                     *(undefined4 *)(*(int *)(&DAT_08349844 + (uint)*param_1 * 4) + 0x20));
      }
    }
LAB_08021b0c:
    cVar1 = -1;
  }
  else if (cVar1 == '\x01') {
    sub_08021D7C(&DAT_020301b0,*(undefined4 *)(*(int *)(&DAT_08349844 + (uint)*param_1 * 4) + 0x10))
    ;
    cVar1 = '\x02';
  }
  else {
    if (cVar1 != '\x02') {
      if (cVar1 == '\x03') {
        sub_08021D7C(&DAT_020301b0,
                     *(undefined4 *)(*(int *)(&DAT_08349844 + (uint)*param_1 * 4) + 0x2c));
        DAT_020301a8 = DAT_020301a8 & 0xfffe;
        uVar3 = 0xc;
      }
      else if (cVar1 == '\x04') {
        sub_08021D7C(&DAT_020301b0,
                     *(undefined4 *)(*(int *)(&DAT_08349844 + (uint)*param_1 * 4) + 0x38));
        DAT_02030105 = DAT_02030105 | 0x20;
        uVar3 = 0x14;
      }
      else {
        if (cVar1 == '\x05') {
          sub_08021D7C(&DAT_020301b0,
                       *(undefined4 *)(*(int *)(&DAT_08349844 + (uint)*param_1 * 4) + 0x3c));
          goto LAB_08021b0c;
        }
        if (cVar1 == '\x06') {
          sub_08021D7C(&DAT_020301b0,
                       *(undefined4 *)(*(int *)(&DAT_08349844 + (uint)*param_1 * 4) + 0x40));
          cVar1 = '\a';
          goto LAB_08021b0e;
        }
        if ((((cVar1 != '\a') || (iVar5 = *(int *)(iVar6 + 0x54), iVar5 < 0xb4000)) ||
            (0xc2fff < iVar5)) ||
           ((iVar6 = *(int *)(iVar6 + 0x58), iVar6 < 0x1e000 || (0x27fff < iVar6))))
        goto LAB_08021b10;
        sub_08021D7C(&DAT_020301b0,
                     *(undefined4 *)(*(int *)(&DAT_08349844 + (uint)*param_1 * 4) + 0x44));
        uVar3 = 0x12;
      }
      sub_0801A4CC(uVar3);
      goto LAB_08021b0c;
    }
    sub_08021D7C(&DAT_020301b0,*(undefined4 *)(*(int *)(&DAT_08349844 + (uint)*param_1 * 4) + 0x28))
    ;
    sub_0801A4CC(0xb);
    cVar1 = '\x03';
  }
LAB_08021b0e:
  *(char *)(param_1 + 0xbe) = cVar1;
LAB_08021b10:
  return (ulonglong)in_lr << 0x20;
}

